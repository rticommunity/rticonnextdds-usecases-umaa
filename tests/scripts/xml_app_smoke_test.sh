#!/usr/bin/env bash
set -euo pipefail

build_dir="/build-cache/umaa-xml-app-${CONNEXTDDS_VERSION}"
log_dir="$(mktemp -d)"
autopilot_log="$log_dir/autopilot.log"
publisher_log="$log_dir/publisher.log"
cmake_log="$log_dir/cmake.log"
cmake_module_dir="$NDDSHOME/resource/cmake"

if [[ ! -f "$cmake_module_dir/ConnextDdsCodegen.cmake" ]]; then
    cmake_module_dir="$NDDSHOME/resource/template/rti_workspace/examples/getting_started/resources/cmake"
fi

cleanup() {
    if [[ -n "${autopilot_pid:-}" ]]; then
        kill "$autopilot_pid" 2>/dev/null || true
        wait "$autopilot_pid" 2>/dev/null || true
    fi
    rm -rf "$log_dir"
}
trap cleanup EXIT

if ! cmake -S /workspace -B "$build_dir" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_MODULE_PATH="$cmake_module_dir" >"$cmake_log" 2>&1; then
    cat "$cmake_log" >&2
    exit 1
fi

if ! cmake --build "$build_dir" --target xml_app_autopilot --parallel 1 >>"$cmake_log" 2>&1; then
    cat "$cmake_log" >&2
    exit 1
fi

export DOMAIN_ID=1
export NDDS_QOS_PROFILES="/workspace/qos/umaa_qos_lib.xml;/workspace/cpp/xml-app-framework/domain/umaa_domain_lib.xml;/workspace/cpp/xml-app-framework/components/umaa_autopilot.xml;/workspace/cpp/xml-app-framework/components/umaa_globalvectorcmd.xml"
export LD_LIBRARY_PATH="$build_dir/datamodel/lib:$NDDSHOME/lib/$CONNEXTDDS_ARCH:${LD_LIBRARY_PATH:-}"
export PYTHONPATH=/workspace/python
cd "$build_dir"

"$build_dir/cpp/xml-app-framework/xml_app_autopilot" -v 2 >"$autopilot_log" 2>&1 &
autopilot_pid=$!
"$PYTHON" -c 'import runpy; import rtiumaapy.datamodel; runpy.run_path("/workspace/cpp/xml-app-framework/py/umaa_globalvectorcmd.py", run_name="__main__")' -v 2 >"$publisher_log" 2>&1

writes="$(grep -c 'Writing Global Vector Command' "$publisher_log")"
reads="$(grep -c 'Current Water Speed Command' "$autopilot_log")"

if [[ "$writes" -ne 5 || "$reads" -lt 4 ]]; then
    cat "$publisher_log" >&2
    cat "$autopilot_log" >&2
    echo "Expected five writes and at least four received alive commands; got $writes writes and $reads reads." >&2
    exit 1
fi

printf 'GlobalVector smoke test passed: %s writes, %s reads.\n' "$writes" "$reads"
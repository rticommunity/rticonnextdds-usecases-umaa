#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 2 ]]; then
    echo "Usage: $0 <7.3|7.7> <command> [args...]" >&2
    exit 2
fi

version="$1"
shift

case "$version" in
    7.3|7.7) ;;
    *)
        echo "Unsupported Connext version: $version" >&2
        exit 2
        ;;
esac

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
license_path="${RTI_LICENSE_HOST_PATH:-$HOME/rti_license.dat}"
shared_dir="${CONNEXT_SHARED_DIR:-$repo_root/.docker-shared}"

if [[ ! -r "$license_path" ]]; then
    echo "RTI license file is not readable: $license_path" >&2
    exit 1
fi

mkdir -p "$shared_dir"
install -m 600 "$license_path" "$shared_dir/rti_license.dat"

compose_file="$repo_root/docker/docker-compose.connext-$version.yml"
cd "$repo_root"
CONNEXT_SHARED_DIR="$shared_dir" CONNEXT_WORKSPACE_DIR="$repo_root" \
    docker compose -f "$compose_file" build
CONNEXT_SHARED_DIR="$shared_dir" CONNEXT_WORKSPACE_DIR="$repo_root" \
    exec docker compose -f "$compose_file" run --rm connext "$@"
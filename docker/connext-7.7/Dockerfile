FROM ubuntu:24.04

ARG CONNEXT_VERSION=7.7.0
ARG CONNEXTDDS_ARCH=x64Linux4gcc8.5.0

ENV DEBIAN_FRONTEND=noninteractive \
    NDDSHOME=/opt/rti.com/rti_connext_dds-${CONNEXT_VERSION} \
    CONNEXTDDS_ARCH=${CONNEXTDDS_ARCH} \
    CONNEXTDDS_VERSION=${CONNEXT_VERSION} \
    PATH=/opt/rti.com/rti_connext_dds-${CONNEXT_VERSION}/bin:${PATH} \
    PYTHON=/opt/connext-venv/bin/python \
    PYTHONUNBUFFERED=1

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential \
        ca-certificates \
        cmake \
        curl \
        gnupg \
        python3 \
        python3-pip \
        python3-venv \
    && rm -rf /var/lib/apt/lists/*

RUN curl -fsSL -o /usr/share/keyrings/rti-official-archive.gpg \
        https://packages.rti.com/deb/official/repo.key \
    && printf 'deb [arch=%s signed-by=%s] %s %s main\n' \
        "$(dpkg --print-architecture)" \
        /usr/share/keyrings/rti-official-archive.gpg \
        https://packages.rti.com/deb/official \
        "$(. /etc/os-release && printf '%s' "$VERSION_CODENAME")" \
        > /etc/apt/sources.list.d/rti-official.list

RUN printf 'rti-connext-dds-%s-common rti-connext-dds-%s/license/accepted select true\n' \
        "${CONNEXT_VERSION}" "${CONNEXT_VERSION}" \
        | debconf-set-selections \
    && apt-get update \
    && apt-get install -y --no-install-recommends "rti-connext-dds-${CONNEXT_VERSION}" \
    && rm -rf /var/lib/apt/lists/*

RUN python3 -m venv /opt/connext-venv \
    && /opt/connext-venv/bin/python -m pip install --no-cache-dir \
        "rti.connext==${CONNEXT_VERSION}" \
    "pytest>=8" \
    "pytest-asyncio>=0.24"

WORKDIR /workspace

CMD ["bash"]
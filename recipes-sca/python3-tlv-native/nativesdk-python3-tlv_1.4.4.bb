SUMMARY = "Too less variation - A tool to discover code duplication in various languages"
HOMEPAGE = "https://github.com/priv-kweihmann/tlv"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1e0b805e34c99594e846fa46c20d8b9b"

DEPENDS += "\
    nativesdk-python3-chardet \
    nativesdk-python3-pygments \
"

SRC_URI = "git://github.com/priv-kweihmann/tlv.git;protocol=https;branch=master"
SRCREV = "b3cb3941c78c4be7f887477c65feb2fe770291a0"
S = "${WORKDIR}/git"

inherit sca-description
inherit setuptools3
inherit nativesdk
SCA_TOOL_DESCRIPTION = "tlv"
PIP_INSTALL_PACKAGE = "tlv"
RDEPENDS:${PN}:class-nativesdk += "\
    nativesdk-python3-chardet \
    nativesdk-python3-pygments \
"

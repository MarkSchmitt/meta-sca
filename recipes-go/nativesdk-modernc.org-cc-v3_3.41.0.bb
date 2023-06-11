SUMMARY = "go.mod: modernc.org/cc/v3"
HOMEPAGE = "https://pkg.go.dev/modernc.org/cc/v3"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require modernc.org-cc-v3-sources.inc

EXTRA_DEPENDS += "\
    nativesdk-lukechampine.com-uint128 \
    nativesdk-modernc.org-mathutil \
    nativesdk-modernc.org-strutil \
    nativesdk-modernc.org-token \
"
GO_IMPORT = "modernc.org/cc/v3"
inherit gosrc
inherit nativesdk
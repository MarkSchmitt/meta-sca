SRC_URI += "https://proxy.golang.org/github.com/jackc/pgconn/@v/v1.12.0.zip;srcoutput=github.com/jackc/pgconn;srcinput=github.com/jackc/pgconn@v1.12.0;downloadfilename=github-com-jackc-pgconn-1.12.0.zip;name=github-com-jackc-pgconn"
SRC_URI[github-com-jackc-pgconn.sha256sum] = "034fd2fd5cbab9ab05d21a92efbb1124eeb9c985bac107f31653dac319e63f11"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/jackc/pgconn/LICENSE;md5=d554a30973e07a28d3c1eabfaf7d2a2a \
"

GOSRC_INCLUDEGUARD += "github.com-jackc-pgconn-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jackc-chunkreader-v2-sources.inc', '', 'github.com-jackc-chunkreader-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jackc-pgio-sources.inc', '', 'github.com-jackc-pgio-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jackc-pgpassfile-sources.inc', '', 'github.com-jackc-pgpassfile-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jackc-pgproto3-v2-sources.inc', '', 'github.com-jackc-pgproto3-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-jackc-pgservicefile-sources.inc', '', 'github.com-jackc-pgservicefile-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-crypto-sources.inc', '', 'golang.org-x-crypto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-text-sources.inc', '', 'golang.org-x-text-sources.inc', d)}
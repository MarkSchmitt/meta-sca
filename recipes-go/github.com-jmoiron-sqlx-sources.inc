SRC_URI += "https://proxy.golang.org/github.com/jmoiron/sqlx/@v/v1.3.5.zip;srcoutput=github.com/jmoiron/sqlx;srcinput=github.com/jmoiron/sqlx@v1.3.5;downloadfilename=github-com-jmoiron-sqlx-1.3.5.zip;name=github-com-jmoiron-sqlx"
SRC_URI[github-com-jmoiron-sqlx.sha256sum] = "5900777a64016e4a5b3847126ef4bed4ed5d3543ed980ae8a79ab110c9da8fc6"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/jmoiron/sqlx/LICENSE;md5=4353e10ea313ec47121dd2c7d89ce6b9 \
"

GOSRC_INCLUDEGUARD += "github.com-jmoiron-sqlx-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-lib-pq-sources.inc', '', 'github.com-lib-pq-sources.inc', d)}
SRC_URI += "https://proxy.golang.org/cloud.google.com/go/apigeeconnect/@v/v1.5.1.zip;srcoutput=cloud.google.com/go/apigeeconnect;srcinput=cloud.google.com/go/apigeeconnect@v1.5.1;downloadfilename=cloud-google-com-go-apigeeconnect-1.5.1.zip;name=cloud-google-com-go-apigeeconnect"
SRC_URI[cloud-google-com-go-apigeeconnect.sha256sum] = "bc6654e857da1b91dcce9603349ab66c8ccf452c8fa4e3b09c8e6889b8bfec5f"

GOSRC_LICENSE += "\
    Apache-2.0 \
"
LIC_FILES_CHKSUM += "\
    file://src/cloud.google.com/go/apigeeconnect/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
"

GOSRC_INCLUDEGUARD += "cloud.google.com-go-apigeeconnect-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-googleapis-gax-go-v2-sources.inc', '', 'github.com-googleapis-gax-go-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-api-sources.inc', '', 'google.golang.org-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}
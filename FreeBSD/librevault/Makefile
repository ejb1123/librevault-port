# $FreeBSD$
PORTNAME= librevault
PORTVERSION= 0.1.18.11
DISTVERSIONPREFIX=v
CATEGORIES = games

LIB_DEPENDS= libQt5Core.so.5:devel/qt5-core:
LIB_DEPENDS=libcryptopp.so:security/cryptopp:
USE_QT5=linguist_build
USE_GITHUB= YES
GH_ACCOUNT=ejb1123
GH_PROJECT=librevault
GH_TAGNAME=aa2a109
GH_TUPLE= librevault:librevault-common:master:common/common \
librevault:dir_monitor:master:dir_monitor/contrib/dir_monitor \
librevault:spdlog:master:spdlog/contrib/spdlog \
librevault:docopt.cpp:master:docopt/contrib/docopt \
librevault:rabin:master:rabin/contrib/rabin \
librevault:libnatpmp:master:libnatpmp/contrib/libnatpmp \
librevault:websocketpp:master:websocketpmp/contrib/websocketpp \
librevault:dht:master:dht/contrib/dht \
librevault:miniupnp:master:miniupnp/contrib/miniupnp

pre-configure:
	 exec echo -n "v${PORTVERSION}" > ${WRKSRC}/VERSION
USES= cmake
#CMAKE_ARGS=-D
MAINTAINER= ejbevenour@live.com

.include <bsd.port.mk>


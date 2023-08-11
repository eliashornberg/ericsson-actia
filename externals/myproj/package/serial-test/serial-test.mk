################################################################################
#
# serial-test
#
################################################################################

SERIAL_TEST_VERSION = 0.1
SERIAL_TEST_SITE = $(SERIAL_TEST_PKGDIR)/files
SERIAL_TEST_SITE_METHOD = local
SERIAL_TEST_LICENSE = Actia Software License Agreement
SERIAL_TEST_LICENSE_FILES = EULA COPYING
SERIAL_TEST_REDISTRIBUTE = NO
SERIAL_TEST_INSTALL_TARGET = YES
SERIAL_TEST_DEPENDENCIES = actia-lib

define SERIAL_TEST_BUILD_CMDS
    $(TARGET_MAKE_ENV) $(TARGET_CONFIGURE_OPTS) $(MAKE) -C $ $(@D)
endef

define SERIAL_TEST_INSTALL_TARGET_CMDS
    $(TARGET_MAKE_ENV) $(MAKE) -C $(@D) install DESTDIR=$(TARGET_DIR) PREFIX=/usr
endef

$(eval $(generic-package))

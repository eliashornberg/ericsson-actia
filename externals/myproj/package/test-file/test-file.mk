################################################################################
#
# test-file
#
################################################################################

TEST_FILE_VERSION = 0.1
TEST_FILE_SITE = $(TEST_FILE_PKGDIR)/files
TEST_FILE_SITE_METHOD = local
TEST_FILE_LICENSE = Actia Software License Agreement
TEST_FILE_LICENSE_FILES = EULA COPYING
TEST_FILE_REDISTRIBUTE = NO
TEST_FILE_INSTALL_TARGET = YES
TEST_FILE_DEPENDENCIES =

define TEST_FILE_BUILD_CMDS
    $(TARGET_CONFIGURE_OPTS) $(MAKE) -C $ $(@D)
endef

define TEST_FILE_INSTALL_TARGET_CMDS
    $(MAKE) -C $(@D) install DESTDIR=$(TARGET_DIR) PREFIX=/usr
endef

$(eval $(generic-package))

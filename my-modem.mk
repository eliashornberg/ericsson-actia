################################################################################
#
# my-modem
#
################################################################################

MY_MODEM_VERSION = 0.1
MY_MODEM_SITE = $(MY_MODEM_PKGDIR)/files
MY_MODEM_SITE_METHOD = local
MY_MODEM_LICENSE = Actia Software License Agreement
MY_MODEM_LICENSE_FILES = EULA COPYING
MY_MODEM_REDISTRIBUTE = NO
MY_MODEM_INSTALL_TARGET = YES
MY_MODEM_DEPENDENCIES = actia-lib

define MY_MODEM_BUILD_CMDS
    $(TARGET_MAKE_ENV) $(TARGET_CONFIGURE_OPTS) $(MAKE) -C $ $(@D)
endef

define MY_MODEM_INSTALL_TARGET_CMDS
    $(TARGET_MAKE_ENV) $(MAKE) -C $(@D) install DESTDIR=$(TARGET_DIR) PREFIX=/usr
endef

$(eval $(generic-package))

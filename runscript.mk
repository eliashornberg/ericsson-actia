################################################################################
#
# runscript
#
################################################################################

RUNSCRIPT_VERSION = 1
RUNSCRIPT_SITE = $(RUNSCRIPT_PKGDIR)/files
RUNSCRIPT_SITE_METHOD = local
RUNSCRIPT_SCRIPTS = runscript.sh
RUNSCRIPT_INSTALL_STAGING = YES
RUNSCRIPT_INSTALL_TARGET = YES

define RUNSCRIPT_BUILD_CMDS
    chmod +x $(@D)/$(RUNSCRIPT_SCRIPTS)
endef

define RUNSCRIPT_INSTALL_TARGET_CMDS
    $(INSTALL) -D -m 0755 $(@D)/$(RUNSCRIPT_SCRIPTS) $(TARGET_DIR)/usr/bin/$(RUNSCRIPT_SCRIPTS)
endef

$(eval $(generic-package))

################################################################################
#
# supl-3gpp-lpp-client
#
################################################################################

SUPL_3GPP_LPP_CLIENT_VERSION = 524cbff
SUPL_3GPP_LPP_CLIENT_SITE = $(call github,eliashornberg,SUPL-3GPP-LPP-client,$(SUPL_3GPP_LPP_CLIENT_VERSION))
SUPL_3GPP_LPP_CLIENT_LICENSE = MXM
SUPL_3GPP_LPP_CLIENT_LICENSE_FILES = LICENSE
SUPL_3GPP_LPP_CLIENT_INSTALL_STAGING = NO
SUPL_3GPP_LPP_CLIENT_INSTALL_TARGET = YES
SUPL_3GPP_LPP_CLIENT_DEPENDENCIES = openssl host-cmake host-ninja actia-lib

define SUPL_3GPP_LPP_CLIENT_BUILD_CMDS
	echo $(@D)
	pwd
   (cd $(@D); $(TARGET_CONFIGURE_OPTS) cmake -S . -B build)
   (cd $(@D); $(TARGET_CONFIGURE_OPTS) cmake --build build --config Debug)
endef

#-DCMAKE_VERBOSE_MAKEFILE=ON

define SUPL_3GPP_LPP_CLIENT_INSTALL_TARGET_CMDS
	@install -m 755 $(@D)/build/src/example $(TARGET_DIR)/usr/bin/example
endef

$(eval $(cmake-package))
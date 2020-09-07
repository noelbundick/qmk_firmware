SRC += noelbundick.c

COMMAND_ENABLE   	= no        # Commands for debug and configuration
CONSOLE_ENABLE    = yes       # Console for debug
MOUSEKEY_ENABLE  	= no				# Mouse keys

ifeq ($(strip $(KEYBOARD)), dmqdesign/spin)
  MOUSEKEY_ENABLE = yes       # Mouse keys
  POINTING_DEVICE_ENABLE = yes
endif

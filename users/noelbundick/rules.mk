SRC += noelbundick.c

LTO_ENABLE = yes              # Link Time Optimization (LTO) to reduce firmware size
COMMAND_ENABLE   	= no        # Commands for debug and configuration
CONSOLE_ENABLE    = yes       # Console for debug
MOUSEKEY_ENABLE  	= no				# Mouse keys

ifeq ($(strip $(KEYBOARD)), dmqdesign/spin)
  MOUSEKEY_ENABLE = yes       # Mouse keys
  POINTING_DEVICE_ENABLE = yes
endif

ifeq ($(PROTOCOL), VUSB)
  CONSOLE_ENABLE = no
endif

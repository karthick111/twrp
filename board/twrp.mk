# USB Mounting
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/msm_hsusb/gadget/lun0/file

# TWRP Configurations
TARGET_RECOVERY_QCOM_RTC_FIX := true
RECOVERY_GRAPHICS_USE_LINELENGTH := true
RECOVERY_SDCARD_ON_DATA := true
TW_THEME := portrait_hdpi
TW_INCLUDE_CRYPTO := true
TW_INPUT_BLACKLIST := "hbtp_vm"
TW_BRIGHTNESS_PATH := /sys/class/leds/lcd-backlight/brightness
TW_NO_EXFAT := true
TW_NO_EXFAT_FUSE := true
TW_SCREEN_BLANK_ON_BOOT := true
TW_EXTRA_LANGUAGES := true

# exFAT FS Support
TW_INCLUDE_FUSE_EXFAT := true

# NTFS Support
TW_INCLUDE_FUSE_NTFS := true

#MultiROM config. MultiROM also uses parts of TWRP config
MR_INPUT_TYPE := type_b
MR_DEV_BLOCK_BOOTDEVICE := true
MR_INIT_DEVICES := $(LOCAL_PATH)/multirom/mr_init_devices.c
MR_DEVICE_HOOKS_VER := 4
MR_DEVICE_HOOKS := $(LOCAL_PATH)/multirom/mr_hooks.c
MR_DPI := xhdpi
MR_DPI_FONT := 340
DEVICE_RESOLUTION := 1080x1920
MR_PIXEL_FORMAT := "RGBA_8888"
MR_ENCRYPTION := true
MR_KEXEC_MEM_MIN := 0x0
MR_USE_MROM_FSTAB := true
MR_FSTAB := $(LOCAL_PATH)/multirom/mrom.fstab
MR_CONTINUOUS_FB_UPDATE := true
MR_USE_QCOM_OVERLAY := true
MR_QCOM_OVERLAY_HEADER := $(LOCAL_PATH)/multirom/mr_qcom_overlay.h
MR_NO_KEXEC := enabled
TARGET_RECOVERY_IS_MULTIROM := true

# Versioning
include $(LOCAL_PATH)/multirom/MR_REC_VERSION.mk
ifeq ($(MR_REC_VERSION),)
MR_REC_VERSION := $(shell date -u +%Y%m%d)-01
endif

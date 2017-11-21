#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/soc/7824900.sdhci",
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21", // boot
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p22", // recovery
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p25", // cache
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1",  // modem
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p26", // persist
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", // system
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p49", // userdata
    "/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p27", //misc
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/module/mmcblk",

    "/sys/devices/soc/soc:gpio_keys/input*",
    "sys/firmware/devicetree/base/soc/gpio_keys/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/78b7000.i2c/i2c-3/3-003e/input*",

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/class/android_usb/android0*",\
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // USB drive is in here
    "/sys/devices/platform/msm_hsusb*",
    "/sys/bus/platform/drivers/msm_hsusb*",

    // sdcard
    "/sys/devices/soc/7864900.sdhci/mmc_host/mmc1/mmc1:0007/block/mmcblk1",
    "/sys/devices/soc/7864900.sdhci/mmc_host/mmc1/mmc1:0007/block/mmcblk1*",

    NULL
};

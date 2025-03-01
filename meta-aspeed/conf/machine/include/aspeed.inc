PREFERRED_PROVIDER_virtual/kernel ?= "linux-aspeed"
PREFERRED_PROVIDER_virtual/bootloader ?= "u-boot-aspeed"
PREFERRED_PROVIDER_u-boot ?= "u-boot-aspeed"
PREFERRED_PROVIDER_u-boot-fw-utils ?= "u-boot-fw-utils-aspeed"

PREFERRED_PROVIDER_virtual/bootloader_aspeed-g6 ?= "u-boot-aspeed-sdk"
PREFERRED_PROVIDER_u-boot_aspeed-g6 ?= "u-boot-aspeed-sdk"
PREFERRED_PROVIDER_u-boot-fw-utils_aspeed-g6 ?= "u-boot-fw-utils-aspeed-sdk"

# Build a FIT image and stuff core-image-minimal in it by default.
KERNEL_IMAGETYPE ?= "fitImage"
KERNEL_CLASSES ?= "kernel-fitimage"
INITRAMFS_IMAGE ?= "aspeed-image-initramfs"
INITRAMFS_FSTYPES ?= "cpio.xz"

MACHINE_EXTRA_RRECOMMENDS += "udev-aspeed-vuart"

MACHINEOVERRIDES =. "aspeed:"

SERIAL_CONSOLES ?= "115200;ttyS4"

DEFAULTTUNE_aspeed-g5 ?= "arm1176jzs"
DEFAULTTUNE_aspeed-g6 ?= "armv7a-vfpv4d16"

UBOOT_ENTRYPOINT_aspeed-g4 ?= "0x40001000"
UBOOT_ENTRYPOINT_aspeed-g5 ?= "0x80001000"
UBOOT_ENTRYPOINT_aspeed-g6 ?= "0x80001000"
UBOOT_LOADADDRESS_aspeed-g4 ?= "0x40001000"
UBOOT_LOADADDRESS_aspeed-g5 ?= "0x80001000"
UBOOT_LOADADDRESS_aspeed-g6 ?= "0x80001000"

cmd_/build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi/.install := perl scripts/headers_install.pl /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-3.3.8/include/scsi /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi mips scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; perl scripts/headers_install.pl /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-3.3.8/include/scsi /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi mips ; perl scripts/headers_install.pl /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-3.3.8/include/generated/scsi /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi mips ; for F in ; do echo "\#include <asm-generic/$$F>" > /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi/$$F; done; touch /build/brcm63xx/build_dir/toolchain-mips_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/scsi/.install
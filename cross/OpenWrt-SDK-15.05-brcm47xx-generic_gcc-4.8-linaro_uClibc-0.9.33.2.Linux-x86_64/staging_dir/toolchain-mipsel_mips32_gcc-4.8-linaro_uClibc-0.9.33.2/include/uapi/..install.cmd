cmd_/home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/.install := bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi ./include/uapi ; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi ./include ; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi ./include/generated/uapi ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/$$F; done; touch /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/.install
cmd_base/fman/fman.o = clang -Wp,-MD,base/fman/.fman.o.d.tmp  -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/bus/dpaa -m64 -pthread -I/home/zhf/src/network/meshgw/lib/dpdk/lib/librte_eal/linux/eal/include  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_RDSEED -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_F16C -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/zhf/src/network/meshgw/lib/dpdk/x86_64-native-linux-clang/include -include /home/zhf/src/network/meshgw/lib/dpdk/x86_64-native-linux-clang/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Werror -Wno-missing-field-initializers -Wno-address-of-packed-member -Wno-pointer-arith -Wno-cast-qual -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/bus/dpaa/ -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/bus/dpaa/include -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/bus/dpaa/base/qbman -I/home/zhf/src/network/meshgw/lib/dpdk/lib/librte_eal/common/include    -o base/fman/fman.o -c /home/zhf/src/network/meshgw/lib/dpdk/drivers/bus/dpaa/base/fman/fman.c 
cmd_dpaa2_ethdev.o = gcc -Wp,-MD,./.dpaa2_ethdev.o.d.tmp  -m64 -pthread -I/home/zhf/src/network/dpdk/lib/librte_eal/linux/eal/include  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_RDSEED -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_F16C -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include -include /home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include/rte_config.h -D_GNU_SOURCE -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Werror -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-address-of-packed-member -I/home/zhf/src/network/dpdk/drivers/net/dpaa2 -I/home/zhf/src/network/dpdk/drivers/net/dpaa2/mc -I/home/zhf/src/network/dpdk/drivers/bus/fslmc -I/home/zhf/src/network/dpdk/drivers/bus/fslmc/qbman/include -I/home/zhf/src/network/dpdk/drivers/bus/fslmc/mc -I/home/zhf/src/network/dpdk/drivers/bus/fslmc/portal -I/home/zhf/src/network/dpdk/drivers/mempool/dpaa2 -DALLOW_EXPERIMENTAL_API    -o dpaa2_ethdev.o -c /home/zhf/src/network/dpdk/drivers/net/dpaa2/dpaa2_ethdev.c 

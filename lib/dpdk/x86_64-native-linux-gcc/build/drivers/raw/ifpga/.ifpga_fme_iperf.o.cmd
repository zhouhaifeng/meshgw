cmd_ifpga_fme_iperf.o = gcc -Wp,-MD,./.ifpga_fme_iperf.o.d.tmp  -m64 -pthread -I/home/zhf/src/network/dpdk/lib/librte_eal/linux/eal/include  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_RDSEED -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_F16C -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include -include /home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Werror -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-address-of-packed-member -I/home/zhf/src/network/dpdk/drivers/bus/ifpga -I/home/zhf/src/network/dpdk/drivers/raw/ifpga_rawdev -I/home/zhf/src/network/dpdk/drivers/net/ipn3ke -I/home/zhf/src/network/dpdk/drivers/raw/ifpga_rawdev/base/osdep_rte    -o ifpga_fme_iperf.o -c /home/zhf/src/network/dpdk/drivers/raw/ifpga/base/ifpga_fme_iperf.c 

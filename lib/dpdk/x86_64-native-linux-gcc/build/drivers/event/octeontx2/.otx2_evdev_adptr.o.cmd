cmd_otx2_evdev_adptr.o = gcc -Wp,-MD,./.otx2_evdev_adptr.o.d.tmp  -m64 -pthread -I/home/zhf/src/network/dpdk/lib/librte_eal/linux/eal/include  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_RDSEED -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_F16C -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include -include /home/zhf/src/network/dpdk/x86_64-native-linux-gcc/include/rte_config.h -D_GNU_SOURCE -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Werror -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-address-of-packed-member -I/home/zhf/src/network/dpdk/drivers/common/octeontx2 -I/home/zhf/src/network/dpdk/drivers/mempool/octeontx2 -I/home/zhf/src/network/dpdk/drivers/event/octeontx2 -I/home/zhf/src/network/dpdk/drivers/net/octeontx2 -O3 -DALLOW_EXPERIMENTAL_API    -o otx2_evdev_adptr.o -c /home/zhf/src/network/dpdk/drivers/event/octeontx2/otx2_evdev_adptr.c 

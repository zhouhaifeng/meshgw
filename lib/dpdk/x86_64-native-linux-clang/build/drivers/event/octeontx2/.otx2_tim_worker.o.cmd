cmd_otx2_tim_worker.o = clang -Wp,-MD,./.otx2_tim_worker.o.d.tmp  -m64 -pthread -I/home/zhf/src/network/meshgw/lib/dpdk/lib/librte_eal/linux/eal/include  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_RDSEED -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_F16C -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/zhf/src/network/meshgw/lib/dpdk/x86_64-native-linux-clang/include -include /home/zhf/src/network/meshgw/lib/dpdk/x86_64-native-linux-clang/include/rte_config.h -D_GNU_SOURCE -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Werror -Wno-missing-field-initializers -Wno-address-of-packed-member -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/common/octeontx2 -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/mempool/octeontx2 -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/event/octeontx2 -I/home/zhf/src/network/meshgw/lib/dpdk/drivers/net/octeontx2 -O3 -DALLOW_EXPERIMENTAL_API    -o otx2_tim_worker.o -c /home/zhf/src/network/meshgw/lib/dpdk/drivers/event/octeontx2/otx2_tim_worker.c 

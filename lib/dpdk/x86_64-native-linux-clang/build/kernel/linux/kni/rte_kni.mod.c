#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x64491f21, "module_layout" },
	{ 0x53b954a2, "up_read" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x74efaa35, "netif_carrier_on" },
	{ 0x2b8d371b, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x84a74f55, "__put_net" },
	{ 0xedb94751, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x47928bb2, "kthread_bind" },
	{ 0xc48d6840, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69df54d6, "param_ops_charp" },
	{ 0x30c36813, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0xdf2bb290, "netif_rx_ni" },
	{ 0xea69b125, "unregister_pernet_subsys" },
	{ 0x9d43d65d, "netif_tx_wake_queue" },
	{ 0x3e4faeee, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x75d91a45, "ethtool_op_get_link" },
	{ 0x7547a382, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb0e9fb98, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe35106bb, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x30aef449, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f8240fe, "eth_header_parse" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x31574147, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75cb959e, "eth_type_trans" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x93e542b9, "wake_up_process" },
	{ 0xc9211f3a, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xed6701de, "ether_setup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe16a1623, "dev_trans_start" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa0c7dd4a, "unregister_netdev" },
	{ 0xb3e08c9f, "consume_skb" },
	{ 0x76507406, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x148101c9, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D50F24F97AE1A9AF29FA52E");

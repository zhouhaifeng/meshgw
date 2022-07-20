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
	{ 0xb3753869, "module_layout" },
	{ 0x53b954a2, "up_read" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xecaf5c8a, "netif_carrier_on" },
	{ 0x9d9b5eb4, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x12ea405d, "__put_net" },
	{ 0xe8bc695c, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xec7e781, "kthread_bind" },
	{ 0xeaee8786, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xde4c1a24, "param_ops_charp" },
	{ 0xe582fa0, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5e0d092, "netif_rx_ni" },
	{ 0xc4fa2862, "unregister_pernet_subsys" },
	{ 0x240a49d2, "netif_tx_wake_queue" },
	{ 0x1b44c663, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6ef7ab52, "ethtool_op_get_link" },
	{ 0xa5cc5d9f, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xaadc6c4, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x6700be79, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x4e39b9d3, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa136abd6, "eth_header_parse" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbd4ea856, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x98fcf627, "eth_type_trans" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x76d31a6d, "wake_up_process" },
	{ 0x6559f683, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x50f962f, "ether_setup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdcb76b2b, "dev_trans_start" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc041bda5, "unregister_netdev" },
	{ 0x116c8d71, "consume_skb" },
	{ 0x21d43104, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x38e946e0, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D50F24F97AE1A9AF29FA52E");

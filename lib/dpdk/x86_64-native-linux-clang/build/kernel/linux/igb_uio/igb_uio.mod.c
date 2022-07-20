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
	{ 0x69df54d6, "param_ops_charp" },
	{ 0xfc7147ec, "param_ops_int" },
	{ 0x7a4393ae, "pci_unregister_driver" },
	{ 0x615a469c, "__pci_register_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0x6c91d76f, "_dev_warn" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x345daf8b, "dma_free_attrs" },
	{ 0x26303b8e, "dma_alloc_attrs" },
	{ 0x659c9412, "__uio_register_device" },
	{ 0x1be3b25f, "sysfs_create_group" },
	{ 0x75669953, "dma_set_coherent_mask" },
	{ 0xcb387739, "dma_set_mask" },
	{ 0xe66b5bde, "pci_enable_device" },
	{ 0xc687b2c, "kmem_cache_alloc_trace" },
	{ 0x2f6390d, "kmalloc_caches" },
	{ 0xf54e3ff0, "pci_msi_unmask_irq" },
	{ 0x3e9b0687, "pci_intx" },
	{ 0x1ef6b274, "pci_msi_mask_irq" },
	{ 0x85f9a825, "pci_cfg_access_unlock" },
	{ 0x46d51ea2, "pci_cfg_access_lock" },
	{ 0xcf19bb9, "irq_get_irq_data" },
	{ 0xdac40b3d, "_dev_notice" },
	{ 0x4bfecede, "_dev_err" },
	{ 0x789df779, "__dynamic_dev_dbg" },
	{ 0x2ee85b7d, "pci_irq_vector" },
	{ 0xa8082b7e, "pci_alloc_irq_vectors_affinity" },
	{ 0x8bec90d8, "_dev_info" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xd141db94, "pci_set_master" },
	{ 0xc9268a0a, "pci_check_and_mask_intx" },
	{ 0x382227bf, "uio_event_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe028587, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x34491cc6, "uio_unregister_device" },
	{ 0x20e33e5, "sysfs_remove_group" },
	{ 0x3a445be5, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x33fb8686, "pci_clear_master" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6f1f69a, "pci_enable_sriov" },
	{ 0x1b30e750, "pci_disable_sriov" },
	{ 0x346a3d44, "pci_num_vf" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "26C63DAE2104091D5DE47C6");

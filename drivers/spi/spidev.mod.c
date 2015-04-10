#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15085dd8, "module_layout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x4fbea35c, "no_llseek" },
	{ 0xa5740106, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2ba1639, "class_destroy" },
	{ 0xbe1a3a5d, "driver_unregister" },
	{ 0x2bec0f2f, "spi_new_device" },
	{ 0xd060b02d, "spi_busnum_to_master" },
	{ 0x8b7e2fb4, "spi_register_driver" },
	{ 0xc6b1f91, "__class_create" },
	{ 0xe6dfb171, "__register_chrdev" },
	{ 0x3d032db4, "put_device" },
	{ 0xdb99970c, "spi_setup" },
	{ 0x9279f46d, "get_device" },
	{ 0x6ed0e230, "complete" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x28839a72, "wait_for_completion" },
	{ 0x46236e2d, "spi_async" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0x77e67ce5, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x343a1a8, "__list_add" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8bd96783, "__dynamic_dev_dbg" },
	{ 0x4e415e58, "device_create" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0x5083fed, "__raw_spin_lock_init" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xbadfb214, "device_destroy" },
	{ 0x521445b, "list_del" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0xf7a424d2, "_raw_spin_unlock_irq" },
	{ 0x7dd3946, "dev_set_drvdata" },
	{ 0x1d7d6e7b, "_raw_spin_lock_irq" },
	{ 0xb6f33b5e, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


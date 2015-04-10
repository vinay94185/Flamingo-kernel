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
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xf48dc8c, "cdev_del" },
	{ 0x2ba1639, "class_destroy" },
	{ 0xbadfb214, "device_destroy" },
	{ 0x4e415e58, "device_create" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc6b1f91, "__class_create" },
	{ 0xd2939f67, "cdev_add" },
	{ 0xc64e2eab, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0x8730c9b0, "smem_alloc" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3ea03e18, "mutex_destroy" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x8c7a3757, "of_get_named_gpio_flags" },
	{ 0xa58da602, "of_gpio_named_count" },
	{ 0x76f8b9f3, "of_find_compatible_node" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0xf27b6a21, "dev_err" },
	{ 0xb344e274, "wait_for_completion_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6ed0e230, "complete" },
	{ 0x8bd96783, "__dynamic_dev_dbg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


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
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x1df9a40e, "mobicore_open" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x343a1a8, "__list_add" },
	{ 0x19e67e51, "mobicore_unmap_vmem" },
	{ 0xdb03f2ba, "netlink_kernel_create" },
	{ 0xf27b6a21, "dev_err" },
	{ 0x216d7afd, "mutex_lock_interruptible" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0x88bfafcc, "netlink_kernel_release" },
	{ 0x3f6bf25b, "mobicore_map_vmem" },
	{ 0x521445b, "list_del" },
	{ 0xa68fa671, "mobicore_free_wsm" },
	{ 0xc8cb215b, "netlink_unicast" },
	{ 0xf6c74e73, "init_net" },
	{ 0x4dbd2908, "_dev_info" },
	{ 0x4fac27e8, "__alloc_skb" },
	{ 0xc7ad3f70, "mobicore_allocate_wsm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xe12fa33f, "kfree_skb" },
	{ 0xfc636d6e, "netlink_ack" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe1766a60, "up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfe5a9b96, "dev_set_name" },
	{ 0x428c469b, "__nlmsg_put" },
	{ 0x49d9fb1e, "down_timeout" },
	{ 0x273c6bd0, "mobicore_release" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";


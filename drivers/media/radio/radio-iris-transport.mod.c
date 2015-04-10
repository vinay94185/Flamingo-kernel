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
	{ 0xb284a2e7, "smd_close" },
	{ 0xfe26d64c, "radio_hci_register_dev" },
	{ 0xe8be64e0, "smd_disable_read_intr" },
	{ 0x75180776, "smd_named_open_on_edge" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x8949858b, "schedule_work" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x14cce620, "smd_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x98890297, "smd_read_avail" },
	{ 0xe12fa33f, "kfree_skb" },
	{ 0x3d4c59ee, "smd_write" },
	{ 0xb52bdacd, "radio_hci_unregister_dev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xb387171b, "radio_hci_recv_frame" },
	{ 0x252323a6, "skb_put" },
	{ 0x27e1a049, "printk" },
	{ 0x4fac27e8, "__alloc_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


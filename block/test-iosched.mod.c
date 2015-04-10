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
	{ 0x65e75cb6, "__list_del_entry" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1adb62a4, "_raw_spin_unlock" },
	{ 0xa733c7f3, "debugfs_create_dir" },
	{ 0xbb18c4d8, "bio_alloc" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbeca73a4, "blk_put_request" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x8a94e55e, "blk_run_queue" },
	{ 0xb1a01f42, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0xb6164507, "debugfs_create_u32" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x8635fc06, "init_request_from_bio" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xf2f83f80, "elv_unregister" },
	{ 0xe7783890, "elv_dispatch_sort" },
	{ 0xf7a424d2, "_raw_spin_unlock_irq" },
	{ 0x8834396c, "mod_timer" },
	{ 0x69cdee35, "bio_put" },
	{ 0x91ba2230, "elv_register" },
	{ 0x221c8074, "blk_rq_map_kern" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x1d7d6e7b, "_raw_spin_lock_irq" },
	{ 0x5083fed, "__raw_spin_lock_init" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x84741c31, "_raw_spin_lock" },
	{ 0x44b4693d, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x76bff920, "prepare_to_wait" },
	{ 0x2824f314, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa978a2e6, "blk_get_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


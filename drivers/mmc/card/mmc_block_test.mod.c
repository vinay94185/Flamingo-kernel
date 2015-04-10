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
	{ 0xfa799e30, "test_iosched_unregister" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0xf0372292, "test_iosched_register" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x9e6e745c, "mmc_blk_get_packed_statistics" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x38490187, "check_test_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bac6108, "__blk_put_request" },
	{ 0x65e75cb6, "__list_del_entry" },
	{ 0xc17f9bad, "test_get_test_data" },
	{ 0xad9cf52e, "mmc_blk_init_bkops_statistics" },
	{ 0x44b4693d, "__wake_up" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb81960ca, "snprintf" },
	{ 0x55166d90, "test_iosched_add_unique_test_req" },
	{ 0x35afba5b, "debugfs_create_file" },
	{ 0xb6164507, "debugfs_create_u32" },
	{ 0x144bfa4e, "test_iosched_get_debugfs_tests_root" },
	{ 0x78eb352e, "test_iosched_get_debugfs_utils_root" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcd536103, "debugfs_remove" },
	{ 0xf7a424d2, "_raw_spin_unlock_irq" },
	{ 0x343a1a8, "__list_add" },
	{ 0x1d7d6e7b, "_raw_spin_lock_irq" },
	{ 0xb922f43f, "test_iosched_create_test_req" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x53035116, "test_iosched_mark_test_completion" },
	{ 0x2824f314, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x76bff920, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x76aa5377, "test_iosched_set_test_result" },
	{ 0x3a2328b0, "__blk_run_queue" },
	{ 0x73d0351e, "test_iosched_add_wr_rd_test_req" },
	{ 0xdd96579, "test_iosched_get_req_queue" },
	{ 0x64834111, "mmc_blk_init_packed_statistics" },
	{ 0x65043b59, "test_iosched_set_ignore_round" },
	{ 0xe483645, "test_iosched_start_test" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x1adb62a4, "_raw_spin_unlock" },
	{ 0x84741c31, "_raw_spin_lock" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";


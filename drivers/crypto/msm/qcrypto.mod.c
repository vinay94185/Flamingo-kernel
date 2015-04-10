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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xa733c7f3, "debugfs_create_dir" },
	{ 0xc981c2c1, "mem_map" },
	{ 0x97255bdf, "strlen" },
	{ 0x7dd3946, "dev_set_drvdata" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0xadbfe87a, "crypto_ablkcipher_type" },
	{ 0x18037304, "crypto_dequeue_request" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0x8949858b, "schedule_work" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x35afba5b, "debugfs_create_file" },
	{ 0x103c9c3e, "qce_ablk_cipher_req" },
	{ 0x423d477d, "crypto_aead_type" },
	{ 0xb1a01f42, "debugfs_remove_recursive" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xda89b2d5, "msm_bus_cl_get_pdata" },
	{ 0xf27b6a21, "dev_err" },
	{ 0x9cd9dce, "_raw_spin_unlock_irqrestore" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xb344e274, "wait_for_completion_interruptible" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x27f42e42, "crypto_register_ahash" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0xd26f8cb, "qce_enable_clk" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x795d6ef0, "platform_driver_register" },
	{ 0x7fe928cd, "device_init_wakeup" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x597ceff0, "qce_hw_support" },
	{ 0xa8a62df7, "crypto_enqueue_request" },
	{ 0x4dbd2908, "_dev_info" },
	{ 0x1437bc5e, "qce_aead_req" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x741881f, "qce_open" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x81a61e31, "qce_disable_clk" },
	{ 0x5083fed, "__raw_spin_lock_init" },
	{ 0x496c4b88, "crypto_unregister_ahash" },
	{ 0x5fb1189e, "crypto_register_alg" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x56f31e92, "_raw_spin_lock_irqsave" },
	{ 0x575c81e1, "qce_close" },
	{ 0x9e88409c, "pm_stay_awake" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ded90b3, "msm_bus_scale_register_client" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x3b6197e7, "pm_relax" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ed0e230, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x86e0edeb, "platform_driver_unregister" },
	{ 0x2b7ee4d6, "crypto_unregister_alg" },
	{ 0xb6f33b5e, "dev_get_drvdata" },
	{ 0x75b45b18, "qce_process_sha_req" },
	{ 0x27626dd3, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


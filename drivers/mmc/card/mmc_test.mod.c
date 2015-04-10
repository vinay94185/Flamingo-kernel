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
	{ 0xc49b821c, "single_release" },
	{ 0x6e6315e3, "seq_read" },
	{ 0x11602736, "seq_lseek" },
	{ 0xb33ee863, "mmc_unregister_driver" },
	{ 0xe75cda2a, "mmc_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x66b2a859, "nr_free_buffer_pages" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x5059cf8f, "mmc_set_blocklen" },
	{ 0xc981c2c1, "mem_map" },
	{ 0xd5152710, "sg_next" },
	{ 0x3e92496d, "page_address" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x87ced5f, "mmc_wait_for_req" },
	{ 0xe7165bae, "mmc_wait_for_cmd" },
	{ 0x5f754e5a, "memset" },
	{ 0x655d7281, "mmc_start_req" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0xad961518, "mmc_can_trim" },
	{ 0xb7cb5a6e, "mmc_set_data_timeout" },
	{ 0x599753f0, "mmc_erase" },
	{ 0x9f40cb48, "mmc_can_erase" },
	{ 0xe6da44a, "set_normalized_timespec" },
	{ 0x4dbd2908, "_dev_info" },
	{ 0xf27b6a21, "dev_err" },
	{ 0x35afba5b, "debugfs_create_file" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0xa01c3789, "contig_page_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4adf3dee, "__free_pages" },
	{ 0xbd936f34, "mmc_rpm_release" },
	{ 0x31b94073, "mmc_release_host" },
	{ 0x343a1a8, "__list_add" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x6bb1b470, "__mmc_claim_host" },
	{ 0x986386b0, "mmc_rpm_hold" },
	{ 0x27e1a049, "printk" },
	{ 0x34fa7610, "__alloc_pages_nodemask" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x240d80a7, "mmc_can_reset" },
	{ 0x3e67bd1b, "mmc_hw_reset_check" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x413ca849, "seq_printf" },
	{ 0x2460d907, "single_open" },
	{ 0xcd536103, "debugfs_remove" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x521445b, "list_del" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


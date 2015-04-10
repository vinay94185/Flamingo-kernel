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
	{ 0x21889143, "clk_unprepare" },
	{ 0x92b57248, "flush_work" },
	{ 0xf48dc8c, "cdev_del" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x65e75cb6, "__list_del_entry" },
	{ 0xc64e2eab, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2ccac4c9, "up_read" },
	{ 0xe5183196, "clk_enable" },
	{ 0x1adb62a4, "_raw_spin_unlock" },
	{ 0xc981c2c1, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x8fd10e31, "clk_disable" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0xbadfb214, "device_destroy" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x41d8be4e, "kthread_create_on_node" },
	{ 0x343a1a8, "__list_add" },
	{ 0x6389d4c5, "down_read" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf27b6a21, "dev_err" },
	{ 0x216d7afd, "mutex_lock_interruptible" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0x3b99a580, "kthread_stop" },
	{ 0xb344e274, "wait_for_completion_interruptible" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0x4e415e58, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x14d7ddc0, "__get_page_tail" },
	{ 0x822d6a24, "release_pages" },
	{ 0xd2939f67, "cdev_add" },
	{ 0x4dbd2908, "_dev_info" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x134dd2d0, "get_user_pages" },
	{ 0x1000e51, "schedule" },
	{ 0x935ead89, "clk_prepare" },
	{ 0xb894926d, "schedule_work_on" },
	{ 0xdc40f372, "wake_up_process" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x84741c31, "_raw_spin_lock" },
	{ 0xef6c70a6, "clk_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x945fcc90, "sched_setscheduler" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b3f8c97, "remap_pfn_range" },
	{ 0x6210ec1, "put_page" },
	{ 0x2ba1639, "class_destroy" },
	{ 0x3568d526, "get_pid_task" },
	{ 0x7b5c8440, "vm_munmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6ed0e230, "complete" },
	{ 0x7c823972, "vmalloc_to_page" },
	{ 0xfe5a9b96, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xc6b1f91, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x15ccd6f2, "is_vmalloc_addr" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


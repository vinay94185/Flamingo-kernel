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
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x7dd3946, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x22fd9f7f, "usb_kill_urb" },
	{ 0xe860c4d7, "__video_register_device" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf9318674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x216d7afd, "mutex_lock_interruptible" },
	{ 0x75b2242a, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x10b21df6, "video_unregister_device" },
	{ 0xbfd44edd, "usb_set_interface" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0x13897fea, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9d08b4e9, "vm_insert_page" },
	{ 0x8297b3cb, "module_put" },
	{ 0xa2e1d8a5, "usb_submit_urb" },
	{ 0x7d01a021, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x8501cd40, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3fdf3a4e, "usb_clear_halt" },
	{ 0xa1474c7e, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x44b4693d, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3401fbf, "input_unregister_device" },
	{ 0x76bff920, "prepare_to_wait" },
	{ 0x2824f314, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x92a88bae, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7c823972, "vmalloc_to_page" },
	{ 0xb71e7a16, "usb_alloc_coherent" },
	{ 0xb6f33b5e, "dev_get_drvdata" },
	{ 0x229f1f1d, "usb_free_urb" },
	{ 0xd5e48b23, "video_ioctl2" },
	{ 0x3afb9171, "try_module_get" },
	{ 0xa245150d, "usb_alloc_urb" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0xef3340d4, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFBCF4BD2374601FE6CCFCE");

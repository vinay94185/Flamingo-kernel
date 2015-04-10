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
	{ 0x86e0edeb, "platform_driver_unregister" },
	{ 0x795d6ef0, "platform_driver_register" },
	{ 0xa1474c7e, "input_free_device" },
	{ 0x8501cd40, "input_register_device" },
	{ 0xef3340d4, "input_allocate_device" },
	{ 0x7dd3946, "dev_set_drvdata" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3401fbf, "input_unregister_device" },
	{ 0xb6f33b5e, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


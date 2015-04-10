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
	{ 0xc11bd00f, "tracepoint_probe_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xfa012fe7, "tracepoint_probe_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0x1f16305e, "coresight_abort" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


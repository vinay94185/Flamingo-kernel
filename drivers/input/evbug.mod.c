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
	{ 0xe60b7526, "input_unregister_handler" },
	{ 0x3d8bde9d, "input_register_handler" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x603cb2e, "input_open_device" },
	{ 0xa4d29b89, "input_register_handle" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c60642, "input_unregister_handle" },
	{ 0x237f5159, "input_close_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

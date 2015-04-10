#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15085dd8, "module_layout" },
	{ 0x9739b73, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xad31d6c6, "input_set_abs_params" },
	{ 0x3e55195f, "input_set_capability" },
	{ 0x167f84b9, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb6fb41b2, "input_event" },
	{ 0x27e1a049, "printk" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0xff178f6, "__aeabi_idivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


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
	{ 0xc9bbd11e, "module_layout" },
	{ 0x952c58ef, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xac113ad7, "debugfs_create_dir" },
	{ 0x840507bf, "bio_alloc" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab5a8bd, "blk_put_request" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x17168877, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0x16beccc2, "__blk_run_queue" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0x3241c9b2, "debugfs_create_u32" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xa53c3a84, "init_request_from_bio" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x58b9f207, "elv_unregister" },
	{ 0x1542a92d, "elv_dispatch_sort" },
	{ 0x8834396c, "mod_timer" },
	{ 0x2dc2e153, "bio_put" },
	{ 0xe97bd122, "elv_register" },
	{ 0x362f275a, "blk_rq_map_kern" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x70fb58e2, "kmem_cache_alloc_trace" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf30b5243, "blk_get_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


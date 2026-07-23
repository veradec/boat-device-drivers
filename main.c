#include <linux/module.h>
#include <linux/init.h>

static int __init boat_init(void)
{
	printk("boat driver: module loaded\n");
	return 0;
}

static void __exit boat_exit(void)
{
	printk("boat driver: module unloaded\n");
}

module_init(boat_init);
module_exit(boat_exit);

MODULE_LICENSE("MIT");
MODULE_AUTHOR("verade");
MODULE_DESCRIPTION("Driver for the Big Boat Speaker :3");

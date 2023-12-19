#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ankit Tripathi");
MODULE_DESCRIPTION("A Simple Hello World Programm!");
MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	pr_info("Hello World!\n");
	return 0;
}
static void __exit hello_exit(void)
{
	pr_info("Goodbye world\n");
}

module_init(hello_start);
module_exit(hello_exit);



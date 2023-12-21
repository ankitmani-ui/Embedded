#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ankit Tripathi");
MODULE_DESCRIPTION("Simple linux driver (Manually creatiing a Device file)");


dev_t dev =0;

static int __init hello_world_init (void)
{
	if((alloc_chrdev_region(&dev, 0,1,"Ankit"))<0){
		pr_err("Cannot allocate major number for device\n");
	        return -1;
	}
        pr_info("Kernel Module inserted successfully....\n");
	return 0;
}
static void  __exit hello_world_exit(void)
{
	unregister_chrdev_region(dev, 1);
	pr_info("Kernel module removed successfully ...\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);




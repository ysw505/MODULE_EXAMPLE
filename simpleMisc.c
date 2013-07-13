#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/miscdevice.h>

static struct miscdevice simpleDev = {
		.minor	= 100,
		.name	= "SIMPLE"
};


static int __init init_simple(void)
{
		printk("Regist simple");
		misc_register(&simpleDev);
}

static void __exit exit_simple(void)
{
		
		printk("Deregist simple");
		misc_deregister(&simpleDev);
}

module_init(init_simple);
module_exit(exit_simple);
MODULE_LICENSE("GPL");

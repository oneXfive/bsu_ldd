#include<linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello Linux Kernel\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Hello module end\n");
}

module_init(hello_init);
module_exit(hello_exit);

//描述性定义
MODULE_LICENSE("Dual BSD/GPL");//许可 GPL、GPL v2、Dual MPL/GPL、Proprietary(专有)等,没有内核会提示
MODULE_AUTHOR("Dugu bug");		//作者
MODULE_VERSION("V0.1");  		//版本


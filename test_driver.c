#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include "hhh.h"
MODULE_LICENSE("GPL");


static int num=0;
module_param(num,int,S_IRUGO);

static int para[10];
static int n_para;
module_param_array(para, int, &n_para, S_IRUGO);

static int __init hello_init(void)
{
    printk(KERN_ERR "Hello\n");
    hhh();
    printk(KERN_ALERT "num: %d", num);


    printk(KERN_ALERT "n_para: %d\n", n_para);
    int i = 0;
    for(i = 0; i < n_para; ++i){
        printk(KERN_ALERT "para[%d]: %d\n", i, para[i]);
    }


    return 0;
}


static void __exit hello_exit(void)
{
    printk(KERN_ERR "Goodbye\n");
}


module_init(hello_init);
module_exit(hello_exit);

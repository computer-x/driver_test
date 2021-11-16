#include <linux/module.h>
#include "hhh.h"

int hhh(void)
{
    printk(KERN_ALERT "hhh, this is my module\n");
    return 0;
}

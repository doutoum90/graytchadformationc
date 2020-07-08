#include <linux/init.h>
#include <linux/module.h>

int simple_module_init(void)
{
    printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
    return 0;
}

void simple_module_exit(void)
{
    printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
}
module_init(simple_module_init);
module_exit(simple_module_exit);
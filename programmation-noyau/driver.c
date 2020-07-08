#include <linux/init.h>
#include <linux/module.h>

int mon_driver_init(void)
{
    printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
    return 0;
}

void mon_driver_exit(void)
{
    printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
}
module_init(mon_driver_init);
module_exit(mon_driver_exit);
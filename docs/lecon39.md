# Leçon C 39

## Les drivers

[Virtual Box](https://www.virtualbox.org)
[Ubuntu 20.04](https://releases.ubuntu.com/20.04/)

### caracteres drivers vs block caracteres

Bibliothèques :

``` c
#include <linux/init.h>
#include <linux/module.h>
```

Affichage Kernel :

``` c
printk(KERN_ALERT "%s",__FUNCTION__);
```

modules de chargement et de déchargement

``` c
int simple_module_init(void){
	printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
	return 0;
}

void simple_module_exit(void){
	printk(KERN_ALERT, "dans la %s fonction", __FUNCTION__);
}
module_init(simple_module_init);
module_exit(simple_module_exit);
```

compilation : 

``` Makefile
obj-m += driver.o
all:
	make -C /usr/src/linux-headers-$(shell uname -r) M=$(shell pwd) modules
clean:
	make -C /usr/src/linux-headers-$(shell uname -r) M=$(shell pwd) clean
```

* on utilise la commande `make` pour compiler.

* Pour charger le module `sudo insmod driver.ko # ou sudo modprobe driver`
* les messages sont logés dans `/var/log/syslog` et donc  pour les voir `tail -f /var/log/syslog` .

* pour supprimer le module `sudo rmmod driver.ko`

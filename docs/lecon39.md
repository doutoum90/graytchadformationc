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
printk(KERN_ALERT "",__FUNCTION__);
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
obj-m += hello-1.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
```

* on utilise la commande `make` pour compiler.

* Pour charger le module `sudo insmod hello.ko # ou sudo modprobe hello`
* les messages sont logés dans `/var/log/messages` et donc  pour les voir `tail -f /var/log/messages` .

* pour supprimer le module `rmmod hello`

obj-m += driver.o

all:
	make -C /usr/src/linux-headers-$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /usr/src/linux-headers-$(shell uname -r)/build M=$(PWD) clean
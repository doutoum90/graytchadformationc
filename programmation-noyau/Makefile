obj-m += driver.o

all:
	make -C /lib/src/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/src/$(shell uname -r)/build M=$(PWD) clean
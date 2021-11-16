obj-m:=test.o
test-objs:=hhh.o test_driver.o
KDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)


default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf .*.cmd *.o *.mod.c *.ko .tmp_versions *.order *symvers *Module.markers



rmmod test
dmesg -C
insmod test.ko num=666 para=7,8,9
rmmod test
dmesg

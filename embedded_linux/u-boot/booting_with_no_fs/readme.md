# bootloader 

## how to install on our system 
1. clone the repo or download the source code on your host 
2. cross compile the code using the tool chain that we made using ct-ng
3. confiure the target arch
4. support editenv,saveenv and other needed commands and configure saving settings
5. install qemu 
6. clone the kernel source code 
7. compile it using the cross tool chain that we generated 
8. generate the suitable dtb
9. prepare the virtual sd card 
10. run qemu 

```
qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel path/u-boot -sd path/sd.img

fatload mmc 0:1 ${kernel_addr_r} zImage
fatload mmc 0:1 ${fdt_addr_r} vexpress-v2p-ca9.dtb
setenv bootargs 'console=ttyAMA0 root=/dev/mmcblk0p2 rootfstype=ext4 rw rootwait init=/sbin/init'
saveenv
bootz ${kernel_addr_r} - ${fdt_addr_r}

```
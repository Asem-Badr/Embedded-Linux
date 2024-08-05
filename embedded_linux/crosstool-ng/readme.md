# crosstool-ng 
this tool automates the process of generating a tool chain for the cross compilation of the kernel and other software that we need to run on our target machine.

## how to install and use for qemu 
```
clone crosstool-ng repo

./bootstrap

./configure --enable-local

make

./ct-ng

./ct-ng list-samples

./ct-ng cortex-a9

./ct-ng menuconfig

# configure the clibrary and tools that you need 

./ct-ng build 

```
the output tool chain will be found in ~/x-tools directory

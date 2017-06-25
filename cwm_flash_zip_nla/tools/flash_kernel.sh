#!/sbin/sh
#
# Live ramdisk patching script
#
# This software is licensed under the terms of the GNU General Public
# License version 2, as published by the Free Software Foundation, and
# may be copied, distributed, and modified under those terms.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# Please maintain this if you use this script or any part of it

cd /tmp/
/sbin/busybox dd if=/dev/block/mmcblk0p8 of=./boot.img
./unpackbootimg -i /tmp/boot.img
./mkbootimg --kernel /tmp/zImage --ramdisk /tmp/boot.img-ramdisk.gz --cmdline "androidboot.hardware=qcom loglevel=1 vmalloc=200M"  --base 00200000 --pagesize 4096 --ramdisk_offset 01300000 --tags_offset 00000100 --dt /tmp/boot.img-dt -o /tmp/newboot.img
/sbin/busybox dd if=/tmp/newboot.img of=/dev/block/mmcblk0p8

## Limbo for Android ##
  * Limbo is an x86 PC Emulator for Android devices based on [QEMU](http://wiki.qemu.org/).
  * Download source code [here](https://code.google.com/p/limbo-android/source/checkout).

## THIS PROJECT IS NO LONGER MAINTAINED ##
  * If you wish to continue work please fork

## Latest News ##
  * A team from **Intel** has successfully enabled **KVM support** with Limbo for x86 Android devices. A technical presentation was given in the KVM 2013 forum: http://www.youtube.com/watch?v=sZQ-xZfc8NA

  * The Demo of a **modified Limbo version booting Windows 8 on top of Android in ~20 secs** can be seen here: https://www.youtube.com/watch?v=sZQ-xZfc8NA&feature=share&t=23m52s

  * I recommend you to **visit the YT video link above and give the Intel team a "like"**. This demo is very promising and might be the first step in popularizing PC emulators for Mobile Devices.

## Supported Host OSes: ##
  * Android ARM
  * Android x86

## Supported Guest OSes: ##
  * DSL Linux (ver 4.4.10 & 4.4.11 RC2) http://www.damnsmalllinux.org
  * Debian (Only 3.0.x Woody) http://cdimage.debian.org/cdimage/archive/
  * FreeDOS http://www.freedos.org/
  * Kolibri OS http://kolibrios.org/en/
  * AROS http://aros.sourceforge.net/

## WARNING ##
  * **MS WINDOWS, UBUNTU**, and other large OSes are **NOT** supported by the current version of Limbo because of their **heavy use of CPU, Memory, and SD Card**, as well as other incompatibilities.
  * Some Devices are known **NOT** to work with Limbo (ie Nexus 4).

## ISSUES ##
  * Limbo runs under emulation and **NOT** virtualization so it's slower than an emulator running on your PC. Virtualization is made possible with KVM, see Latest News.
  * Limbo needs several UI enhancements (Mouse, Gestures, etc..) as well as filesystem integration (file sharing) and QEMU core performance optimizations catered for Android OS.
  * Limbo is based on QEMU 1.1.0 which is an old version and needs to be re-based to newest [QEMU 1.7](http://wiki.qemu.org/Download). QEMU versions 1.5+ contain changes in the cpu timer routines which need to be ported successfully to Android in order for Limbo to work.

I'm hoping others will read this and continue to improve Limbo.

## README ##
  * For instructions on how to build Limbo for ARM or x86 Android devices see README in the root folder of the source code.

##  THIS PROJECT IS NO LONGER MAINTAINED 
# 64-bit Operating System from scratch
---------------------------------
## Prerequisites
- A text editor such as _VS Code_.
- _Docker_ for creating our build-environment.
- _Qemu_ for emulating our operating system.
  -Remember to add Qemu to the path so that you can access it from your command-line. (Windows instructions here)
  
## Setup
-------------------------------------------------------------------------------
Build an image for our build-environment:

- ___docker build buildenv -t myos-buildenv___
Build
-------------------------------------------------------------------------------
Enter build environment:

- Linux or MacOS: docker run --rm -it -v "$pwd":/root/env myos-buildenv
- Windows (CMD): docker run --rm -it -v "%cd%":/root/env myos-buildenv
- Windows (PowerShell): docker run --rm -it -v "${pwd}:/root/env" myos-buildenv
- NOTE: If you are having trouble with an unshared drive, ensure your docker daemon has access to the drive you're development environment is in. For Docker Desktop, this is in "Settings > Shared Drives" or "Settings > Resources > File Sharing".
Build for x86 (other architectures may come in the future):

___make build-x86_64___
To leave the build environment, enter ___exit___.

Emulate
-------------------------------------------------------------------------------
You can emulate your operating system using _Qemu_: (Don't forget to add qemu to your path!)

- ___qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso____
- NOTE: When building your operating system, if changes to your code fail to compile, ensure your QEMU emulator has been closed, as this will block writing to _kernel.iso_.
Alternatively, you should be able to load the operating system on a USB drive and boot into it when you turn on your computer. (I haven't actually tested this yet.)

Cleanup
-------------------------------------------------------------------------------
Remove the build-evironment image:

- ___docker rmi myos-buildenv -f___

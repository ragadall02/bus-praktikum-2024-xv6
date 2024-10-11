# Instructions for Mac M1
- brew tap riscv/riscv
- brew install riscv-tools
- brew install riscv64-elf-gcc
- brew install qemu
- TOOLPREFIX=riscv64-elf- make qemu
- Exit: Ctrl-A, X (hold Ctrl, press A, release Ctrl, press X)

export PATH=$PATH:/usr/local/i386elfgcc/bin

nasm boot/realmode.asm -f bin -o bin/boot.bin
nasm boot/kernel_entry.asm -f elf -o bin/kernel_entry.o

i386-elf-gcc -ffreestanding -c kernel/kernel.c -o bin/kernel.o
i386-elf-gcc -ffreestanding -c drivers/screen.c -o bin/screen.o
i386-elf-gcc -ffreestanding -c drivers/ports.c -o bin/ports.o

i386-elf-ld -o bin/kernel.bin -Ttext 0x1000 bin/kernel_entry.o bin/kernel.o bin/ports.o bin/screen.o --oformat binary

cat bin/boot.bin bin/kernel.bin > OS.bin

qemu-system-i386 -fda OS.bin

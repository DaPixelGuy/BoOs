C_SOURCES = $(wildcard kernel/*.c drivers/*.c)
HEADERS = $(wildcard kernel/*.h drivers/*.h)

OBJ = $(C_SOURCES:.c=.o)

CC = /usr/local/i386elfgcc/bin/i386-elf-gcc
LD = /usr/local/i386elfgcc/bin/i386-elf-ld

bin/realmode.bin:
	nasm boot/realmode.asm -f bin -o bin/realmode.bin

bin/kernel_entry.o:
	nasm boot/kernel_entry.asm -f elf -o bin/kernel_entry.o

bin/kernel.bin: bin/kernel_entry.o ${OBJ}
	${LD} -o $@ -Ttext 0x1000 $^ --oformat binary

OS.bin: bin/realmode.bin bin/kernel.bin
	cat $^ > OS.bin

bin/%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -ffreestanding -c $< -o bin/$@

bin/%.o: %.asm
	nasm $< -f elf -o $@

bin/%.bin: %.asm
	nasm $< -f bin -o $@


run: OS.bin
	qemu-system-i386 -fda $<

clean:
	rm -f drivers/*.o
	rm -f kernel/*.o
	rm -f bin/*.o
	rm -f bin/*.bin
	rm -f OS.bin

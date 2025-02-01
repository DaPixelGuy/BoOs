[org 0x7c00]

KERNEL_OFFSET equ 0x1000

mov [BOOT_DRIVE], dl
mov bp, 0x9000
mov sp, bp
call load_kernel
call swtch
jmp $

%include "boot/util/print.asm"
%include "boot/util/disk.asm"
%include "boot/gdt.asm"
%include "boot/swtch.asm"

[bits 16]
load_kernel:
    mov bx, KERNEL_OFFSET ; Read from disk and store in 0x1000
    mov dh, 15
    mov dl, [BOOT_DRIVE]
    call disk_load
    ret

[bits 32]
startPM:
	call KERNEL_OFFSET
	jmp $

BOOT_DRIVE db 0

times 510-($-$$) db 0
dw 0xaa55

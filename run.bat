@echo off
start tail -f debug.log

qemu ^
-drive file=Build\Ovmf3264\DEBUG_VS2022\FV\OVMF.fd,format=raw,if=pflash ^
-serial file:debug.log

taskkill /im tail.exe /f

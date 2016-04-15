AESCrypt: Encrypt & Decrypt a File

Encrypt/decrypt a file as follows:

Encrypt

	aescrypt -e -p <password_message> <file>

Decrypt

	aescrypt -d -p <password_message> <file>

You could backup and encrypt your home folder using the syntax:

	tar -cvf - /home/<home_folder> | aescrypt -e -p <password_message> - > backup.tar.

Download AESCrypt from: 
* https://www.aescrypt.com/download/
* AESCrypt GUI (64-bit) https://www.aescrypt.com/download/v3/linux/AESCrypt-GUI-3.10-Linux-x86_64-Install.tgz
* AESCrypt GUI (32-bit) https://www.aescrypt.com/download/v3/linux/AESCrypt-GUI-3.10-Linux-x86-Install.tgz



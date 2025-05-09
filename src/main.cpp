#include <stdio.h>	/* printf */
#include <stdlib.h>	/* malloc, atoi, rand... */
#include <string.h>	/* memcpy, strlen... */
#include <stdint.h>	/* uints types */
#include <sys/types.h>	/* size_t ,ssize_t, off_t... */
#include <unistd.h>	/* close() read() write() */
#include <fcntl.h>	/* open() */
#include <sys/ioctl.h>	/* ioctl() */
#include <errno.h>	/* error codes */

// ioctl commands defined for the pci driver header
#include "ioctl_cmds.h"

int main(int argc, char** argv)
{
	printf("hello world\n");
	return 0;
}

// #define DEVICE_FILE "/dev/mydev"
// #define WR_LCD  _IOW('a', 7, char *)

// int main() {
//     int fd = open(DEVICE_FILE, O_RDWR);
//     if (fd < 0) {
//         perror("Erro ao abrir o dispositivo");
//         return -1;
//     }

//     char message[] = "Ola, DE2i-150!";

//     if (ioctl(fd, WR_LCD, message) < 0) {
//         perror("Erro ao escrever no LCD");
//     } else {
//         printf("Mensagem enviada para o LCD com sucesso!\n");
//     }

//     close(fd);
//     return 0;
// }

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
		int fd;
		char databuffer[20];
		
		fd = open("myname.txt", O_RDONLY);
		printf("The file descriptor : %d\n", fd);
		read(fd, databuffer, 20);
		write(1, databuffer, 20);
		return 0;
}

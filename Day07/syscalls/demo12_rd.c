#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(void)
{
	char str[20];

	int fd = open("my_fifo", O_RDONLY);

	read(fd, str, sizeof(str));

	printf("Recieved data = %s\n", str);

	close(fd);
	return 0;
}

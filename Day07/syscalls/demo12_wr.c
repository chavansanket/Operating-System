#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(void)
{
	char str[20]  = "PG-DAC";

	int fd = open("my_fifo", O_WRONLY);

	write(fd, str, sizeof(str));

	close(fd);
	return 0;
}

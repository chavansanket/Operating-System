#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int fs, fd, cnt;
	char buf[16];

	if(argc != 3)
	{
		printf("Run Program as : ./mycp <file1> <file2>\n");
		exit(-1);
	}
	//1. open both file : source - read, destination - write, create, trunc
	fs = open(argv[1], O_RDONLY);
	fd = open(argv[2], O_CREAT|O_WRONLY|O_TRUNC, 0660);

	//2. read data from source file and write into destination file
	while((cnt = read(fs, buf, sizeof(buf))) != 0)
		write(fd, buf, cnt);

	//3. close both the files
	close(fs);
	close(fd);
	printf("file is copied successfully\n");
	return 0;
}














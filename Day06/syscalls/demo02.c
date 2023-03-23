#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int ret;
	printf("Program started!!!\n");
	ret = fork();
	printf("ret = %d\n", ret);
	printf("pid = %d, ppid = %d\n", getpid(), getppid());
	printf("Program finished!!!\n");

	sleep(2);
	return 0;
}

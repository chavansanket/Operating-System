#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int ret;
	ret = fork();
	if(ret == -1)
	{
		printf("fork() is failed\n");
		return 1;
	}
	else if(ret == 0)
	{
		printf("Child : Program started\n");
		printf("Child : pid = %d, ppid = %d\n", getpid(), getppid());
		printf("Child : Program finished\n");
	}
	else
	{
		printf("Parent : Program started\n");
		printf("Parent : pid = %d, ppid = %d\n", getpid(), getppid());
		printf("Parent : Program finished\n");

	}
	return 0;
}








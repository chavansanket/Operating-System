#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(void)
{
	int s, pid;
	int ret = fork();
	if(ret == 0)
	{
		// child
		printf("Child Started!!!\n");
		for(int i = 0 ; i < 7 ; i++)
		{
			printf("Child : i = %d\n", i);
			sleep(1);
		}
		printf("Child Finished!!!\n");
	}
	else
	{
		// parent
		printf("Parent Started!!!\n");
		for(int i = 0 ; i < 15 ; i++)
		{
			if(i == 7)
			{
				//pid = wait(&s);
				//pid = waitpid(ret, &s, 0);
				pid = waitpid(-1, &s, 0);
				printf("Exit status(%d) = %d\n", pid, WEXITSTATUS(s));
			}
			printf("Parent : i = %d\n", i);
			sleep(1);
		}
		printf("Parent Finished!!!\n");
	}
	return 0;
}












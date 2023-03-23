#include<stdio.h>
#include<unistd.h>


int main(void)
{
	int ret = fork();
	if(ret == 0)
	{
		// child
		printf("Child Started!!!\n");
		for(int i = 0 ; i < 15 ; i++)
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
		for(int i = 0 ; i < 7 ; i++)
		{
			printf("Parent : i = %d\n", i);
			sleep(1);
		}
		printf("Parent Finished!!!\n");
	}
	return 0;
}







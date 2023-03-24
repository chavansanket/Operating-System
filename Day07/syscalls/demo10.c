#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void my_action(int num)
{
	printf("Signal Received : %d\n", num);
}


int main(void)
{
	int i=0;
	signal(2, my_action);
	while(1)
	{
		printf("i = %d\n", i++);
		sleep(1);
	}
	return 0;
}

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int count = 0;


void *thread_fun1(void *param)
{
	int num;
	for(int i = 0 ; i < 10 ; i++)
	{	
		// DEC
		num = count;
		num++;
		printf("INC : count = %d\n", num);
		count = num;
		// INC
		sleep(1);
	}
}

void *thread_fun2(void *param)
{
	int num;
	for(int i = 0 ; i < 10 ; i++)
	{
		// DEC
		num = count;
		num--;
		printf("DEC : count = %d\n", num);
		count = num;
		// INC
		sleep(1);
	}
}

int main(void)
{
	pthread_t t1, t2;

	// INIT
	printf("Before : count = %d\n", count);
	pthread_create(&t1, NULL, thread_fun1, NULL);
	pthread_create(&t2, NULL, thread_fun2, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	printf("After : count = %d\n", count);

	return 0;
}











#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


void *thread_fun1(void *param)
{
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("Thread 1 : i = %d\n", i);
		sleep(1);
	}
}

void *thread_fun2(void *param)
{
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("Thread 2 : i = %d\n", i);
		sleep(1);
	}
}
int main(void)
{
	pthread_t t1, t2;

	pthread_create(&t1, NULL, thread_fun1, NULL);	
	pthread_create(&t2, NULL, thread_fun2, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	return 0;
}













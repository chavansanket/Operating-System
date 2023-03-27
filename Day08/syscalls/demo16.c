#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


void *thread_fun(void *param)
{
	long num = (long)param;
	for(int i = 1 ; i <= 10 ; i++)
	{
		printf("%ld * %d = %ld\n", num, i, num * i);
		sleep(1);
	}
}

int main(void)
{
	pthread_t t1, t2;

	pthread_create(&t1, NULL, thread_fun, (void *)5);
	pthread_create(&t2, NULL, thread_fun, (void *)6);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);


	return 0;
}











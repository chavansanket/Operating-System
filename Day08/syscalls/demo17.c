#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


void *thread_fun(void *param)
{
	long num = (long)param;
	long fact = 1;
	for(int i = 1 ; i <= num ; i++)
		fact *= i;
	return (void *)fact;
}

int main(void)
{
	pthread_t t1;
	int *fact;

	pthread_create(&t1, NULL, thread_fun, (void *)5);

	pthread_join(t1, (void **)&fact);
	printf("fact = %d\n", fact);


	return 0;
}











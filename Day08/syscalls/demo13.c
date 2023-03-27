#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main(void)
{
	int s, ret;
	int *ptr;

	int shmid = shmget(0x1234, 20, IPC_CREAT | 0600);

	ret = fork();
	
	ptr = (int *)shmat(shmid, NULL, 0);

	shmctl(shmid, IPC_RMID, NULL);

	if(ret == 0)
	{
		// child -- read
		for(int i = 0 ; i < 5 ; i++)
			printf("ptr[%d] = %d\n", i, ptr[i]);
	}
	else
	{
		// parent -- write
		for(int i = 0 ; i < 5 ; i++)
			ptr[i] = i;
		wait(&s);
	}
	shmdt(ptr);
	return 0;
}


















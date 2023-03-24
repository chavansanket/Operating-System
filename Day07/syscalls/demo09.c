#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msg{
	long type;
	char str[20];
};

int main(void)
{
	int s, msgid;
	struct msg m1, m2;	

	msgid = msgget(0x1234, IPC_CREAT | 0600);

	int ret = fork();
	if(ret == 0)
	{
		// child
		msgrcv(msgid, &m2, sizeof(m2.str), 11, 0);
		printf("Child : Received msg : %s\n", m2.str);
	}
	else
	{
		// parent
		printf("Parent : Enter string : ");
		scanf("%[^\n]s", m1.str);
		//strcpy(m1.str, "Sunbeam Pune");
		m1.type = 11;
		msgsnd(msgid, &m1, sizeof(m1.str), 0);

		wait(&s);
	}
	msgctl(msgid, IPC_RMID, NULL);

	return 0;
}






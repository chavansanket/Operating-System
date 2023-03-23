#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(void)
{
	int s;
	int ret = fork();
	if(ret == 0)
	{
		// child
		//execl("/usr/bin/ls", "ls", "-l", NULL);
		//execlp("ls", "ls", "-l", NULL);
		
		char *arg[] = {"ls", "-l", NULL};
		//execv("/usr/bin/ls", arg);
		//execvp("ls", arg);

		char *envp[] = {"USER=devendra", "HOME=/home/sunbeam", "TEST=test", NULL};
		execle("./main", "main", NULL, envp);
		printf("Here\n");
	}
	else
	{
		// parent
		waitpid(ret, &s, 0);
		printf("Exit status = %d\n", WEXITSTATUS(s));
	}
	return 0;
}




















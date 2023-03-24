#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void)
{
	int s;
	int arr[2];
	char str1[20], str2[20];
	
	// arr[0] - read
	// arr[1] - write
	pipe(arr);

	int ret = fork();
	if(ret == 0)
	{
		// child
		close(arr[1]);
		read(arr[0], str2, sizeof(str2));
		printf("Child : Received msg : %s\n", str2);
	}
	else
	{
		// parent
		close(arr[0]);
		printf("Parent : Enter string : ");
		scanf("%[^\n]s", str1);

		write(arr[1], str1, sizeof(str1));
		wait(&s);
	}

	return 0;
}






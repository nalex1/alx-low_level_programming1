#include<stdio.h>
#include<unistd.h>

/**
 * Return :@ 0
 * Main ID
 */

int main(void)
{
	pid_t a;
	a=fork();
	if(a==0)
	{
		printf("\n Parent process ID is : %u\n", getppid());
		 printf("\n Child  process ID is : %u\n", getpid());
	}
	return 0;
}




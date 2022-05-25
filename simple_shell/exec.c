#include<stdio.h>
#include<unistd.h>
int main(void)
{
	char *bp = "ls";
	char *args[]= {bp, "-lh", "/home", NULL};

	execvp(bp,args);
	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	char *envp[];
    while(*envp)
        printf("%s\n",*envp++);
}

#include <stdio.h>
#define IN 1
#define OUT 0
/**
 *THIW WILL PROMPT THE USER
 *
 *Return @ 0

 */


int main (void)
{
	int c,state;
	state= IN;
	while((c=getchar()) != EOF){
if(c== ' ' || c == '\t')
	state =OUT;
else if (state == OUT){
	state = IN;
	putchar('\n');
	putchar(c);
}else
putchar(c);
}
}

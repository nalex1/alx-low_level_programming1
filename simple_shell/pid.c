#include<stdio.h>
#include<unistd.h>

/**
 * Return :@ 0
 * Main ID
 */

int main(void)
{
	pid_t my_PID;
	my_PID= getpid();
        
            
                 printf("\n process ID is : %u\n",my_PID);
        
        return 0;
}




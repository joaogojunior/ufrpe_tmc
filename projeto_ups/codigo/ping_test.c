#include <stdio.h>
#include <stdlib.h>

int main(void){
	 int a = system("ping -c1 192.168.203.1 > /dev/null");
	  if(a == -1)
		       printf("call failed!");
	   else if (WEXITSTATUS(a) == 127)
		        printf("shell command not found!");
	    else
		         printf("system call return succesfull with %d",WEXITSTATUS(a));
}


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid=fork();
	int x=5;
	
	if(pid<0)
	{
		perror("Error creating child: ");
		return -1;
	}
	
	else if(pid>0)
	{
		sleep(2);
		printf("Parent sys- Hello World\n");
		x-=5;
		printf("x=%d\n",x);
	}
	
	else
	{
		printf("Child sys- Hello Parent\n");
		x*=x;
		printf("x=%d\n",x);
	}
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid=fork();
	int i;
	
	if(pid<0)
	{
		perror("Error creating child: ");
		return -1;
	}
	
	if(pid>0)
	{
		for(i=0;i<10;i++)
		{
			sleep(1);
			printf("P, i=%d\n",i);
		}
	}
	
	else
	{
		for(i=9;i>=0;i--)
		{
			sleep(2);
			printf("C, i=%d\n",i);
		}
	}
	return 0;
}

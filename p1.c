#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    int i;
    if(pid<0)
    {
        perror("Error creating child: ");
        return -1;
    }

    else if(pid>0)
    {
        for(i=0;i<=10;i++)
        {
            sleep(1);
            printf("Parent: %d \n",i);
        }
    }
    else
    {
         for(i=0;i<=10;i++)
         {
            sleep(1);
            printf("Child: %d \n",i);
         }
    }
    return 0;
}
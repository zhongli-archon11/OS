#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t p;
    p = fork();
    if(p==-1)
    {
        printf("There is an error while calling fork()");
    }
    if(p==0)
    {
        printf("We are in the child process\n");
    }
    else
    {
        printf("We are in the parent process\n");
    }
    return 0;
}


#include <stdio.h>

int main()
{
    if(fork()==0)
        printf("child [1]: %d   PPID: %d\n",getpid(),getppid());
    else
    {
        if(fork()==0)
            printf("Child [2]:  %d   PPID: %d\n",getpid(),getppid());
        else
        {
            if(fork()==0)
                printf("Child [3]:  %d   PPID: %d\n",getpid(),getppid());
            else
            {
                printf("Parent :%d    PPID:  %d\n",getpid(),getppid());
                wait();
            }
                
            wait();
        }
        
        wait();
    }
    return 0;
}


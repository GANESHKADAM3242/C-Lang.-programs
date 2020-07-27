
// This program for Single Parent having Multiple child's 
// Example.  PPID=2000
// child_1 PID : 2001 PPID: 2000
// child_2 PID : 2002 PPID: 2000
// child_3 PID : 2003 PPID: 2000

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


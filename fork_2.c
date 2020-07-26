
#include <stdio.h>

int main()
{
  if( fork()==0 )
  {
      printf("child [1]: %d   PPID: %d\n",getpid(),getppid());
      if(fork()==0)
      {
        printf("child [2]: %d   PPID: %d\n",getpid(),getppid());
        if(fork()==0)
        {
            printf("child [3]: %d   PPID: %d\n",getpid(),getppid());
            
        }
        wait();
      }
      wait();
  }
  else
  {
      printf("Parent: %d   PPID: %d\n",getpid(),getppid());
      wait();
  }

    return 0;
}


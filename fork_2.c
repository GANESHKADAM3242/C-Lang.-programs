//*
//    Parent: 5269   PPID: 5264                                                                                                       
//    child [1]: 5270   PPID: 5269                                                                                                    
//    child [2]: 5271   PPID: 5270                                                                                                    
//    child [3]: 5272   PPID: 5271  
*//



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


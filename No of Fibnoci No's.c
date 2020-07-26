
#include <stdio.h>
int fib(int);
int main()
{
  int no,i;
  while(1){
            printf("\nRange of fibno no's:");
            scanf("%d",&no);
  
            for(i=0; i<=no; i++)
            {
               printf("%d ",fib(i));
                 
            }
    
  }
  
  
    return 0;
}


  int fib(int n)
{
    
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fib(n-1) + fib(n-2) );
      
} 

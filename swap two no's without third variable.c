
#include <stdio.h>

int main()
{
    int a,b,t;
    while(1){
            printf("Enter the value a: ");
            scanf("%d",&a);
            printf("Enter the value b: ");
            scanf("%d",&b);
            
            printf("**** Method 1\n");
             //   method no 1
             
             a=a+b;
             b=a-b;
             a=a-b;
             
             printf("a=%d   b:%d\n",a,b);
            printf("\n**** Method 2\n");
            //  method no 2
            
            a= a^b;
            b= b^a;
            a= a^b;
            
            printf("a:%d   b:%d\n",a,b);
            
              printf("\n**** Method 3\n");
            //  method no 3
        
            a = a+b-(b=a);
            printf("a=%d  b:%d\n",a,b);
            
    
    }
    
    return 0;
}


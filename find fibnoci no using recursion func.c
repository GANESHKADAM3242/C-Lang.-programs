
#include <stdio.h>
int fact(int);
int main()
{
int no,result;
        while(1){
                    printf("\nEnter the No:");
                    scanf("%d",&no);
                    
                    result=fact(no);
                    
                    printf("Result:%d\n",result);
        
        }
    
    return 0;
}

int fact(int x)
{
    if(x==1)
        return 1;
    else
        return(x*fact(x-1));
}


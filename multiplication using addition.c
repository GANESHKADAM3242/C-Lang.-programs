
#include <stdio.h>

int main()
{
    int a,b,result;
    while(1){
            printf("Enter A nd B :");
            scanf("%d%d",&a,&b);
            
            while(b)
            {
                result=result+a;
                b=b-1;
            }
            
            printf("Result:%d\n",result);
            
    
    }
    
    return 0;
}


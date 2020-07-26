
#include<stdio.h>

int main()
{
    
    int no,result,rem,temp;
    
    while(1){
                        
            printf("Enter the Number: ");
            scanf("%d",&no);
            result=0;
            temp=no;
            while(no!=0)
            {
                rem=no%10;
                result=(result*10)+rem;
                no=no/10;
            }
            
            printf("\nOld No: %d\nNew No: %d\n",temp,result);    
    }
    return 0;
}

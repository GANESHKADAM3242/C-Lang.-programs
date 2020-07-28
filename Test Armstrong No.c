// Armstrong No's : 0 1 153  370  371   407
//eg.   how to Test:  153   
//    no of digits is 3
//  so....  (1*1*1) + (5*5*5) + (3*3*3) = 153

#include <stdio.h>

int main(void)
{
    int no,rem,result,temp;
    while(1){
            printf("\nEnter the No: ");
            scanf("%d",&no);
            result=0;
            temp=no;
            while(no!=0)
            {
                
                rem=no%10;
                
                result= result + (rem*rem*rem);
                no=no/10;
            }
            
            printf("result: %d\n",result);
            if(temp==result)
                printf("Given number is Armstrong No.");
            else
                printf("Given No is not Armstrong No.:");
                
    }
    
        
    return 0;
}

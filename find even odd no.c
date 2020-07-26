
#include<stdio.h>

int main(void)
{
    int no;
    while(1){
             
            printf("\nEnter any no: ");
            scanf("%d",&no);
            
            if((no%2)==0)
                printf("Given No is Even");
            else
                printf("girvn no is odd");   
    }
    return 0;
}

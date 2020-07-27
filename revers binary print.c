
#include <stdio.h>

int main()
{
    int no;
    
    printf("Enter the number: ");
    scanf("%d",&no);
    printf("Binary:\n");
    for(int i=31; i>=0; i--){
        printf("%d",(no>>i)&1);
        if(i%4 == 0)
            printf(" ");
    }
    int i,j,m,n;
    for(i =0,j=31; i<j; i++,j--){
        m = (no>>i)&1;
        n =(no>>j)&1;
        if(m != n){
            no = no^(1<<i);
            no = no^(1<<j);
        }
    }
    printf("\nResult: \n");
    for(int i=31; i>=0; i--){
        printf("%d",(no>>i)&1);
        if(i%4 == 0)
            printf(" ");
    }

    return 0;
}

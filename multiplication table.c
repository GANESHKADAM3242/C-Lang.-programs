
#include <stdio.h>

int main()
{
    int no,i;
    printf("Enter the No.:");
    scanf("%d",&no);
    i=1;
    while(i!=10)
    {
        printf("%d x %d : %d\n", no,i,no*i);
        if(i==11)
            break;
        else
            i++;
    }
    
    return 0;
}


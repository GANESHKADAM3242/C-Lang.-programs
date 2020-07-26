

#include <stdio.h>

int main()
{
    int dec,rem,temp,i=0;
    char arr[5];
    printf("Enter the Decimal value:  ");
    scanf("%d",&dec);
    
    temp=dec;
    
    while(temp != 0)
    {
        rem = temp%16;
        
        if(rem<10)
            rem = rem + 48;
        else
            rem = rem + 55;
            
        arr[i] = rem;
        i++;
        
        temp = temp/16;
    }
    
    for(int j=3; j>=0; j--)
        printf("%c",arr[j]);
        
    return 0;
}

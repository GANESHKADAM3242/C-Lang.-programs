
#include <stdio.h>

int main()
{
    int dec,rem,temp,i,j;
    static char str[2];
    printf("Ënter the Decimal No:");
    scanf("%d",&dec);
    
    temp = dec;
    
    i=0;
    while(temp)
    {
        rem = temp%8;       /*     i=1     keep above while         */
        str[i] = rem;       /*     rem = (temp % 8 ) * i;           */
        i++;                /*      temp /= 8;                      */
        temp /= 8;          /*      i *= 10;                        */
    }
    
    for(j=2; j>=0; j--)
        printf("%d",str[j]);

    return 0;
}




#include <stdio.h>

void main()
{
    float a;
    double c;
    int b,k,l=0,m[20],n,i,count=0,p;

    printf("Enter any float number:");
    scanf("%lf",&c);

    b=c;
    a=c-b;

    printf("%d,%f",b,a);
    printf("\n");

    while(b!=0)
    {
        n=b%2;
        b/=2;
        m[i]=n; 
        count+=1;
        i++;
    }

    for(k=count-1;k>=0;k--)
    {
        printf("%d",m[k]);
    }

    printf(".");
    for(p=1;p<=8;p++)
    {
        a=a*2;
        l=a;
        printf("%d",l);
        if(l==1)
        a=a-l;
    }

    printf("\n");

}


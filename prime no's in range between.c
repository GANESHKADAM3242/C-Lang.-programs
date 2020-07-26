/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int min,max,i,b,j;
    
    printf("\n Enter the two no. in between you want to check:");
    scanf("%d%d",&min,&max);
    printf("%d-%d\n",min,max);
    
    for(j=min;j<=max;j++)
    {
        b=0;
    
        for(i=1;i<=max;i++)
        {
            if(j%i==0)
            {
                 b++;
            }
        }
    
        if(b==2)
        {
            printf("%d  ",j);
        }
     
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int no,temp,rem,result;
    while(1){
     
                printf("\nEnter the No:");
                scanf("%d",&no);
                temp=no;
                result=0;
                while(no!=0)
                {
                    rem=no%10;
                    result=(result*10)+rem;
                    no=no/10;
                }
                
                if(result==temp)
                    printf("%d Given No is Pallindrome.....",temp);
                else
                    printf("%d is not pallindrome Number....",temp);
   
    }
    return 0;
}


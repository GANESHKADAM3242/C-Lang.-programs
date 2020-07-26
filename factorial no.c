/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//  find the Factorial no 
//    5!  ---->   5*4*3*2*1 = 120 is the facorial of 5! 

#include <stdio.h>

int main()
{
    int no,i,new;
    while(1){
                    printf("Enter the number: ");
                    scanf("%d",&no);
                    
                    new=1;
                    for(i=no; i>0; i--)
                    {
                        new = new*i;
                        
                    }
                    
                    printf("facorial : %d\n", new);
    
    }
    
    return 0;
}


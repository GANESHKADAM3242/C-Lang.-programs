

#include <stdio.h>

int main()
{
    int a=12,b=4,result=0,count=0;
    
    while (b) 
    { 
        // check for set bit and left  
        // shift n, count times 
        if (b % 2 == 1)               
            result += a << count; 
  
        // increment of place value (count) 
        count++; 
        b /= 2; 
    } 
    
    printf("Result:%d\n",result);
    return 0;
}


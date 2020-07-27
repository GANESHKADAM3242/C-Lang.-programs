
#include <stdio.h>

int main()
{
    int arry[4] = {1,2,3,5};
    int result=1,temp;
    temp = sizeof(arry)/sizeof(arry[0]);
   // printf("Temp %d\n",temp);
    int value = ((temp+1)*(temp+2))/2;
   // printf("value %d\n",value);
    int i=temp,j=0;
    for(i=0; i<temp; i++){
        value = value - arry[j++];
    }
    printf("Missing Arry no is %d\n",value);
    
    return 0;
}

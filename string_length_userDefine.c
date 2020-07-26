

#include <stdio.h>
#include<string.h>

int str_len(char []);


int main()
{
    char str[]="ganesh kadam";
    
    
//      Strlen()        //
    int len1,len2;
    len1 = strlen(str);
    printf("Length = %d\n",len1);
    
    len2 = str_len(str);
    printf("LENGTH: %d\n",len2);
    
    
    
    
    return 0;
}




int str_len(char str[])
{
    int i=0,count=0;
    
    while(str[i] !='\0')
    {
        count++;
        i++;
    }
    
    return count;
}











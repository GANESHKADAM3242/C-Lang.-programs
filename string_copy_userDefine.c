

#include <stdio.h>
#include<string.h>

char *str_cpy(char dest[], char src[]);

int main()
{
    char str1[] = "ganesh_kadam", str2[22],str3[22];
    
    printf("otput: %s\n\n", strcpy(str2,str1));
    
    printf("OUTPUT: %s\n\n",str_cpy(str3,str1));

    return 0;
}

char *str_cpy(char dest[], char src[])
{
    int i=0;   
    
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    return dest;
}

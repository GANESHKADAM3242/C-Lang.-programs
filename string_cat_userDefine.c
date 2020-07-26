

#include <stdio.h>
#include<string.h>

char *str_cat(char dest[], char source[]);

int main()
{
    char str1[]="ganesh", str2[]="_kadam",str3[]="pannu",str4[]="_kadam";
    
    printf("string: %s\n",strcat(str1,str2));
    
//          str_cat     
//  char *strcat(char *dest, const char *source);

    printf("\nOUTPUT: %s",str_cat(str3,str4));
    

    return 0;
}

char *str_cat(char dest[], char source[])
{
    int i=0,len1,len2;
    len1 = strlen(dest);        // 6
    len2 = strlen(source);      // 6
    
    while(source[i] != '\0')
    {
        dest[len1] = source[i];
        i++;
        len1++;
    }
    
    return dest;
}

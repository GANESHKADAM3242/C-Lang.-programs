

#include <stdio.h>
#include<string.h>

char *strNcpy(char dest[], char source[], int no);

int main()
{
    char str1[] = "GaneshTanajiKadam";
    char str2[10],str3[10];
    
    printf("string: %s\n",strncpy(str2,str1,6));
    
//      strncpy         //

    printf("OUTPUT: %s\n", strNcpy(str3,str1,6));
    
    return 0;
}


char *strNcpy(char dest[], char source[], int no)
{
    int i=0;
    
    while(i != no)
    {
        dest[i] = source[i];
        i++;
    }
    
    return dest;
}



#include <stdio.h>
#include<string.h>

int __strchr__(char str[],char ch);

int main()
{
    char str[10],ch;
    
    printf("Entre the string: ");
    scanf("%s",str);
    
    while(getchar() != '\n');
    
    printf("Enter the Charater: ");
    scanf("%c",&ch);
    
    printf("\nAddress of Main string: %p\nChar Found @: %p\n\n",&str,strchr(str,ch));
    
    if(__strchr__(str,ch))
        printf("Char is found in main string...\n");
    else
        printf("char is Not found in Main string......\n");

    return 0;
}

int __strchr__(char str[], char ch)
{
    int i=0;
    
    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return 1;
        else
            i++;
    }
    
    return 0;
}

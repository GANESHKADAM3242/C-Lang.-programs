

#include <stdio.h>
#include<string.h>

int my_strstr(char str1[],char str2[]);

int main()
{
    char str1[10],str2[10];
    
    printf("Enter the Main string: ");
    scanf("%s",str1);
    printf("Enter the sub string: ");
    scanf("%s",str2);
    printf("\nAddress of main string: %p",&str1[0]);
    printf("\n\n Address found: %p",strstr(str1,str2));
    
    if(my_strstr(str1,str2))
        printf("\nSub string found in main string....\n");
    else
        printf("Sub string Not found in Main string.....");
        
    return 0;
}

int my_strstr(char str1[],char str2[])
{
    int i=0,j=0,k=0,n1,n2,temp;
    
    n1 = strlen(str1);
    n2 = strlen(str2);
    
    for(i=0; i<(n1-n2); i++)
    {
        temp = i;
        for(j=0; j<n2; j++)
        {
            if(str1[temp] == str2[j])
            {
                if(j == (n2-1))
                    return 1;
                temp++;
            }
            
            else
                break;
        }
    }
    
    return 0;
}


#include <stdio.h>

int main()
{
    unsigned int i = 1;
    char *ch = (char*)&i;
    if(*ch){
        printf("system is Little Endian");
    }
    else{
        printf("systemis Big Endian.");
    }

    return 0;
}


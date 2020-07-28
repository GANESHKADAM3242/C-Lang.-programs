//Program for a[3] = {1,3,5}; b{2,4,6};   Result Should be c[6] = {1,2,3,4,5,6}
#include <stdio.h>
void sort_elements(int a[],int b[],int c[],int n1, int n2);
int main()
{
    int a[4] = {1,4,5,8};
    int b[4] = {2,3,6,7};
    int n1,n2;
    n1 = sizeof(a)/sizeof(a[0]);
    n2 = sizeof(b)/sizeof(b[0]);
    int c[n1+n2];
    
    sort_elements(a,b,c,n1,n2);

    return 0;
}

void sort_elements(int a[],int b[],int c[],int n1, int n2){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
            if(a[i]<b[j]){
                c[k++] = a[i++];
            }
            else{
                c[k++] = b[j++];
            }    
    }
    
    
    for(int l=0;l<(n1+n2)-1;l++){
        printf("%d ",c[l]);
    }
}

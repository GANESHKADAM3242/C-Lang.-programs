#include <stdio.h>

int sample[] = {10,20,30,40,50,60,70,80,50,40,30,20,10,90};

int formula(int *array, int *sum, int pos, int len, int nextNo){
    //subrtact old number from prev. sum and add next number
    *sum = *sum - array[pos]  + nextNo;
    array[pos] = nextNo;
    
    return *sum/len;
}
int main(void){
    int array[5] = {0};
    int sum = 0;
    int pos = 0;
    int newAvrg = 0;
    int len = sizeof(array)/sizeof(array[0]);
    int count = sizeof(sample)/sizeof(sample[0]);
    
    for(int i = 0; i<=count; i++){
        newAvrg = formula(array,&sum,pos,len,sample[i]);
        printf("New_Average : %d\n",newAvrg);
        pos++;
        if(pos==len){
            pos = 0;
        }
    }
    return 0;
}
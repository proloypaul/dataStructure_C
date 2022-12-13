#include<stdio.h>
int main(){
    int numbers[] = {4, 6, 2, 5, 3};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for(int i=1; i<length; i++){
        int storeValue = numbers[i];
        int j = i - 1;
        while(j>=0 && numbers[j]>storeValue){
            numbers[j+1] = numbers[j];
            j = j - 1;
        } 
        numbers[j+1] = storeValue;
    }

    for(int d=0; d<length; d++){
        printf("%d \t", numbers[d]);
    }
}
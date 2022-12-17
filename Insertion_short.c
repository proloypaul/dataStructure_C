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
    insertion_short();
    return 0;
}

void insertion_short(){
    int numberList[] = {6, 2, 7, 1, 8};
    int length2 = sizeof(numberList)/sizeof(numberList[0]);
    for(int n=1; n<length2; n++){
        int storeValue2 = numberList[n];
        int m = n-1;
        while(m>=0 && numberList[m]>storeValue2){
            numberList[m+1] = numberList[m];
            m = m-1;
        }
        numberList[m+1] = storeValue2; 
    } 
    
    for(int d=0; d<length2; d++){
        printf("%d \n", numberList[d]);
    }
}
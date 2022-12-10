#include<stdio.h>
int main(){
    int numbers[] = {4, 3, 8, 2, 5, 9};
    int indexValue; 
    int indivisulaLength = sizeof(numbers[0]);
    int totalLength = sizeof(numbers);
    int length = totalLength/indivisulaLength;
    bubble_short(numbers, indexValue, length);
}
int bubble_short(int numbers[], int indexValue, int length){
    // printf("%d", numbers[2]);
    for(int i=0; i<length; i++){
        // printf("\n %d", numbers[i]);
        for(int j=0; j<length-i-1; j++){
            if(numbers[j+1]<numbers[j]){
                indexValue = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = indexValue;
            }
        }
        // printf("\n %d", numbers[--length]);
    }

    for(int r=length-1; r>=0; r--){
        printf("\n %d", numbers[r]);
    }
}

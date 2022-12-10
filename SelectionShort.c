#include<stdio.h>
int main(){

    int numbers[] = {2, 6, 3, 7, 1, 5, 4};
    int indivisulSize = sizeof(numbers[0]);
    int totalArraySize = sizeof(numbers);
    int length = totalArraySize/indivisulSize;
    // printf("%d", length);
    
    for(int i=0; i<length; i++){
        // printf("\t %d", numbers[i]);
        int index_min = i;
        for(int j=i+1; j<length; j++){
            if(numbers[j]<numbers[index_min]){
                index_min = j;
            }
        }

        if(index_min != i){
            int temp = numbers[i];
            numbers[i] = numbers[index_min];
            numbers[index_min] = temp;

        }
        printf("\n %d", numbers[i]);
    }
    return 0;
}

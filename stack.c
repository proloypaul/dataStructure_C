#include<stdio.h>

#define stack_Max 100
// structure 
typedef struct 
{
    int top;
    int data[stack_Max];
}stack;

// push method 
int countPushMethodCalled = 0;
void push(stack *s, int item){
    if(s->top < stack_Max){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }else{
        printf("sry stack already full \n");
    }
    // countPushMethodCalled used for display pushed data using loop; 
    countPushMethodCalled++;
}
// pop method used for delete data from array 
int pop(stack *s){
    int item;
    if(s->top == 0){ 
        printf("stack is empty! \n");
        return -1;
    }else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

int main(){
    stack my_Stack;
    int dltItem;
    my_Stack.top = 0;

    // push data in data array;
    push(&my_Stack, 5);
    push(&my_Stack, 9);
    push(&my_Stack, 8);
    // showed pushed value from data array
    // for(int i=0; i<countPushMethodCalled; i++){
    //     printf("showed pushed data %d \n", my_Stack.data[i]);
    // };
    
    // pop one data from data array
    dltItem = pop(&my_Stack);
    printf("1st time deleted value %d \n", dltItem);
    dltItem = pop(&my_Stack);
    printf("2nd time deleted value %d \n", dltItem);
    // printf("now top number will be %d", my_Stack.top);
}
#include<stdio.h>
#define qSize 5
typedef struct
{
    int head;
    int tail;
    int data[qSize+1];
} qStructure;
// enQueue like push data according to Queue datastructure
void enQueue(qStructure *q, int item){
    if((q->tail + 1)%(qSize + 1) == q->head){
        printf("Queue is full \n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1)%(qSize + 1);
}

// deQueue like delete data according to Queue datastructure
int deQueue(qStructure *q){
    int item;
    if(q->tail == q->head){
        printf("Queue is Empty! \n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head + 1)%(qSize + 1);
    return item;
}

int main(){
    qStructure my_q;
    int dltItem;
    my_q.head = 0;
    my_q.tail = 0;

    // push data
    enQueue(&my_q, 1);
    printf("1st time tail will be %d \n", my_q.tail);
    enQueue(&my_q, 2);
    printf("2nd time tail will be %d \n", my_q.tail);

    // delete data from Queue
    printf("beginning head %d \n", my_q.head);
    dltItem = deQueue(&my_q);
    printf("dltItem = %d and head = %d \n", dltItem, my_q.head);
    dltItem = deQueue(&my_q);
    printf("dltItem = %d and head = %d \n", dltItem, my_q.head);
    // dltItem = deQueue(&my_q);
    // printf("dltItem = %d and head = %d \n", dltItem, my_q.head);
}
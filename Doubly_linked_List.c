#include<stdio.h>

typedef struct node Node; 
struct node{
    int data;
    Node *next;
    Node *prev;
};
// create Double Linked List node
Node *create_Node(Node *next, Node *prev, int item){
    Node *new_Node = (Node *) malloc(sizeof(Node));

    if(new_Node == NULL){
        printf("Error! Don't create a new node");
    }
    new_Node->data = item;
    new_Node->next = next;
    new_Node->prev = prev;
    return new_Node;
}


int main(){
    int a = 2;
    int b = 1;
    Node *n;
    n = create_Node(a, b, 10);
    printf("data = %d and next = %d \n", n->data, n->next);
}

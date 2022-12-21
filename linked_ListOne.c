#include<stdio.h>
#include<stdlib.h>
// declare structure 
// struct node{
//     int data;
//     struct node *next;
// };
// declare structure using typedef
typedef struct node Node;
struct node{
    int data;
    Node *next;
};
// create node 
Node *create_node(int item, Node *next){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! Don't create a new node \n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

// remove node
Node *remove_node(Node *head, Node *node){
    if(head == node){
        head = node->next;
        free(node);
        return head;
    }

    Node *current_node = head;

    while(current_node != NULL){
        if(current_node->next == node){
            break;
        }
        current_node = current_node->next;
    }
    if(current_node == NULL){
        return head;
    }
    current_node->next = node->next;
    free(node);
    return head;
}
// add node first, anywhere and last position

// added node first position on Liked List
Node *prepend(Node *head, int item){
    Node *new_node = create_node(item, head);
    return new_node;
}

// add node last position on Linked list
Node *append(Node *head, int item){
    Node *new_node = create_node(item, NULL);

    if(head == NULL){
        return new_node;
    }

    Node *current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }

    current_node->next = new_node;
    return head;
}

// add node anywhere position on Linked list
void insert(Node *node, int item){
    Node *new_node = create_node(item, node->next);
    node->next = new_node;
}

// traversal data from Linked list
void traversing_Data(Node *head){
    Node *current_Node = head;
    // printf("data %d", current_Node->data);
    while(current_Node != NULL){
        printf("%d \n", current_Node->data);
        current_Node = current_Node->next;
    };
}

int main(){
    Node *n;
    n = create_node(10, NULL);
    printf("data = %d \n", n->data);
    printf("object = %d", n);
    return 0;
}

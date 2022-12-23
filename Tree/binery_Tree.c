#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node 
{
    int data;
    Node *left;
    Node *right;
};

// create tree node; 
Node *tree_Node(int item){
    Node *new_Node = (Node *) malloc(sizeof(Node));
    if(new_Node == NULL){
        printf("Error! could not create a new node");
        exit(1);
    }
    new_Node->data = item;
    new_Node->left = NULL;
    new_Node->right = NULL;

    return new_Node;
}
// left child 
void add_leftChild(Node *node, Node *child){
    node->left = child;
}
// right child
void add_rightChild(Node *node, Node *child){
    node->right = child;
}

Node *create_Tree(){

    // create root node of binery tree. root node level 0
    Node *rootNode = tree_Node(2);
    // create child of root node of binery tree. level 1
    Node *childOfRootLeft = tree_Node(5);
    Node *childOfRootRight = tree_Node(7);
    add_leftChild(rootNode, childOfRootLeft);
    add_rightChild(rootNode, childOfRootRight);

    // create level 2 of binery tree
    Node *level2LeftNode1 = tree_Node(3);
    Node *level2LeftNode2 = tree_Node(1);
    Node *level2RightNode1 = tree_Node(8);
    Node *level2RightNode2 = tree_Node(9);
    add_leftChild(childOfRootLeft, level2LeftNode1);
    add_leftChild(childOfRootLeft, level2RightNode2);
    add_rightChild(childOfRootRight, level2RightNode1);
    add_rightChild(childOfRootRight, level2RightNode2);
    
    // create level 3 of binery tree
    Node *leaf1 = 6;
    Node *leaf2 = 4;
    Node *leaf3 = 2;
    Node *leaf4 = 5;
    Node *leaf5 = 9;
    add_leftChild(level2LeftNode1, leaf1);
    add_leftChild(level2LeftNode1, leaf2);
    add_leftChild(level2LeftNode2, leaf1);
    add_leftChild(level2LeftNode2, leaf1);
    add_rightChild(level2RightNode1, leaf5);

    return level2RightNode1;
}


int main(){
    // create node 
    // Node *n;
    // n = tree_Node(10);
    // printf("data = %d", n->data);

    // access level2 right node data and child data from binery tree
    Node *level2Right = create_Tree();
     printf("level2 right node one data= %d and child data left = %d and right = %d", level2Right->data, level2Right->left, level2Right->right);
}

// Postorder

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int x){
    struct Node * Root = (struct Node *)malloc(sizeof(struct Node));
    Root->data = x;
    Root->left = NULL;
    Root->right = NULL;
    return(Root);
}

void Postorder(struct Node * Root){
    if(Root == NULL){
        return ;
    }
    Postorder(Root->left);
    Postorder(Root->right);
    printf("%d",Root->data);
}

int main(){
    struct Node * Root = createNode(1);
    Root->left = createNode(2);
    Root->right = createNode(3);
    (Root->right)->left = createNode(4);
    (Root->right)->right = createNode(5);
    Postorder(Root);
    return 0;
}
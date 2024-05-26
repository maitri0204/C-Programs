// Preorder

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int x){
    struct Node * Root = (struct Node * )malloc(sizeof(struct Node));
    Root->data = x;
    Root->left = NULL;
    Root->right = NULL;
    return Root;
}

void Preorder(struct Node * Root){
    if(Root == NULL){
        return ;
    }
    printf("%d",Root->data);
    Preorder(Root->left);
    Preorder(Root->right);
}

int main(){
    struct Node * Root = createNode(1);
    Root->left = createNode(2);
    Root->right = createNode(3);
    (Root->right)->left = createNode(4);
    (Root->right)->right = createNode(5);
    Preorder(Root);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int x){
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->left=NULL;
    root->right=NULL;
    return root;
}
struct node* search(struct node* root, int data)
{
    
    if (root == NULL || root->data == data)
        return root;
 
    
    if (root->data < data)
        return search(root->right, data);
 
    
    return search(root->left, data);
}
void preorder(struct node* root)
{
  if(root==NULL)
    return;
  printf("%d",root->data);
  preorder(root->left);
  preorder(root->right);
}
void main()
{
    struct node* root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    (root->right)->left=createnode(4);
    (root->right)->right=createnode(5);
    int data=10;
    if (search(root,data) == NULL)
        printf("not found");
    else
        printf("found");
    
}
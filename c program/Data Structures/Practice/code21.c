#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to calculate the sum of all nodes in the binary tree
int sumOfNodes(struct Node* root) {
    if (root == NULL)
        return 0;

    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

// Function to print the binary tree in-order
void printInOrder(struct Node* root) {
    if (root == NULL)
        return;

    printInOrder(root->left);
    printf("%d ", root->data);
    printInOrder(root->right);
}

int main() {
    // Create a binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Print the binary tree in-order
    printf("Binary Tree In-Order: ");
    printInOrder(root);
    printf("\n");

    // Calculate and print the sum of all nodes
    int sum = sumOfNodes(root);
    printf("Sum of All Nodes: %d\n", sum);

    return 0;
}

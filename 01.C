#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to search for a value in BST
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }
    
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function for inorder traversal (Sorted Order)
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to create the mirror image of a BST
struct Node* mirror(struct Node* root) {
    if (root == NULL) {
        return NULL;
    }

    // Swap left and right subtrees
    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively mirror the left and right subtrees
    mirror(root->left);
    mirror(root->right);

    return root;
}

int main() {
    struct Node* root = NULL;

    // Inserting nodes into BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Display original BST in inorder (sorted order)
    printf("Original BST (Inorder Traversal): ");
    inorderTraversal(root);
    printf("\n");

    // Searching for a value
    int key = 40;
    if (search(root, key)) {
        printf("%d found in BST.\n", key);
    } else {
        printf("%d not found in BST.\n", key);
    }

    // Creating the mirror image of BST
    root = mirror(root);
    
    // Display mirror image BST in inorder (reverse sorted order)
    printf("Mirror Image BST (Inorder Traversal): ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node // structure for the node 
{
    char word[20];
    struct Node *left, *right; 
} Node;

Node* createNode ( char* word) // create a new node from the given string 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy( newNode -> word, word);
    newNode -> left = newNode -> right = NULL;

    return newNode;
}

Node * insert (Node * root, char * word) //insert a node into the BST
{
    if ( root == NULL)
    {
        printf("Creating root node: %s\n",word);
        return createNode(word);
    }

    if (strcmp(word, root->word) < 0) 
    {
        printf("\nInserting %s to the LEFT of %s\n", word, root->word);
        root->left = insert(root->left, word);
    } 
    else if (strcmp(word, root->word) > 0) 
    {
        printf("\nInserting %s to the RIGHT of %s\n", word, root->word);
        root->right = insert(root->right, word);
    } 
    else 
    {
        printf("Duplicate word ignored: %s\n", word); // Just in case
    }

    return root;
}

int findHeight (Node * root)
{
    if ( root == NULL)
    {
        return -1; // height of an empty tree
    }

    int leftHeight = findHeight(root -> left);
    int rightHeight = findHeight( root -> right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) +1;
}

int findSize (Node * root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + findSize(root -> left) + findSize(root -> right);
}

Node * findMin(Node * root)
{
    while (root -> left != NULL)
    {
        root = root -> left;
    }

    return root;
}

Node * findMax(Node * root)
{
    while (root -> right != NULL)
    {
        root = root -> right;
    }

    return root;
}

Node * mirrorImage(Node * root)
{
    if (root == NULL)
    {
        return NULL;
    }

    Node * mirrorRoot = createNode(root -> word);
    mirrorRoot -> left = mirrorImage(root -> right);
    mirrorRoot -> right = mirrorImage(root -> left);

    return mirrorRoot;
}

void inOrder (Node * root)
{
    if (root != NULL)
    {
        inOrder(root -> left);
        printf("%s ", root -> word);
        inOrder(root -> right);
    }
}

Node * buildBST (char * input_file)
{
    FILE * file = fopen(input_file, "r");
    if (!file)
    {
        printf("File is not found.\n");
        return NULL;
    }

    Node * root = NULL;
    char word[20];

    while (fscanf(file, "%s", word) != EOF)
    {
        printf("\nReading word: %s\n", word);  // Debugging output
        root = insert(root, word);
    }

    fclose(file);
    return root;
}

int main()
{
    Node *root = buildBST("input_file.txt");

    if (!root)
    {
        return 1;
    }

    printf("\nIn-order Traversal (Sorted Words): ");
    inOrder(root);
    printf("\n");

    printf("Tree Height: %d\n", findHeight(root));
    printf("Tree Size: %d\n", findSize(root));

    Node * minNode = findMin(root);
    printf("\nMinimum Word: %s\n", minNode -> word);

    Node * maxNode = findMax(root);
    printf("Maximum Word: %s\n", maxNode -> word);

    Node * mirrorRoot = mirrorImage(root);
    printf("\nIn-order Traversal of Mirror Image: ");
    inOrder(mirrorRoot);
    printf("\n\n");

    return 0;
}
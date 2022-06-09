#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/queue.h>
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node *getNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
struct Node *createNode(int data, struct Node *root)
{
    struct Node *temp = getNode(data);
    if (root == NULL)
    {
        return temp;
    }
    if (root->data > data)
    {
        root->right = createNode(data, root->right);
    }
    else
    {
        root->left = createNode(data, root->left);
    }
    return root;
}

bool find(struct Node *root, int data)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (root->data < data)
    {
        return find(root->left, data);
    }
    else
    {
        return find(root->right, data);
    }
}
int main()
{

    struct Node *root = createNode(10, NULL);
    root = createNode(20, root);
    root = createNode(1, root);
    root = createNode(12, root);
    root = createNode(6, root);
    root = createNode(7, root);
    root = createNode(10, root);
    printf("%d", find(root, 6));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *insertAtBegin(struct Node *root, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
        return root;
    }
    temp->next = root;
    root = temp;
    return root;
}
struct Node *insertAtEnd(struct Node *root, int data)
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = data;
    head->next = NULL;
    if (root == NULL)
    {
        root = head;
        return root;
    }
    struct Node *temp = root;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = head;

    return root;
}
void print(struct Node *temp)
{
    while (temp != NULL)
    {
        /* code */
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Node *root = NULL;

    root = insertAtEnd(root, 10);
    root = insertAtEnd(root, 20);
    root = insertAtEnd(root, 30);
    root = insertAtEnd(root, 40);
    root = insertAtEnd(root, 50);
    root = insertAtEnd(root, 60);
    root = insertAtEnd(root, 70);
    printf("inteseted and end ");
    print(root);
    root = NULL;
    root = insertAtBegin(root, 100);
    root = insertAtBegin(root, 200);
    root = insertAtBegin(root, 300);
    root = insertAtBegin(root, 400);
    root = insertAtBegin(root, 500);
    root = insertAtBegin(root, 600);
    root = insertAtBegin(root, 700);
    printf("inteseted and begineing");
    print(root);
    return 0;
}

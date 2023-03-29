#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insertStart(struct Node** head, int data)
{

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void display(struct Node* node)
{
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL;
    insertStart(&head,50);
    insertStart(&head,40);
    insertStart(&head,30);
    insertStart(&head,20);
    insertStart(&head,10);
    display(head);

    reverse(&head);
    display(head);
    return 0;
}
void reverse(struct Node** head)
{
    struct Node* temp = NULL;
    struct Node* temp2 = *head;
    struct Node* next = NULL;
    while (temp2 != NULL)
    {
        next = temp2->next;
        temp2->next = temp;
        temp = temp2;
        temp2 = next;
    }
    *head = temp;
}

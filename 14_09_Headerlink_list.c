#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node *head, int data, int pos)
{
    struct node *newNode = (struct Node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    struct node *temp = head;

    for (int i = 0; i < pos; i++)
    {
        if (temp->next == NULL)
        {
            printf("Position out of bounds\n");
            free(newNode);
            return;
        }

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(struct node *head)
{
    struct node *temp = head->next;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    struct node *head = (struct Node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        return 1;
    }

    head->next = NULL;

    insert(head, 10, 0);
    insert(head, 20, 2);
    insert(head, 30, 1);

    display(head);

    free(head);

    return 0;
}
# include <stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
void insBeg(struct node **h, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *h;

    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }

    *h = newNode;
}
void insEnd(struct node **h, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct node *p = *h;

    if (*h == NULL)
    {
        *h = newNode;
        return;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->prev = p;

}
// void insEnd(struct node **h, int data)
// {
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
//     newNode->data = data;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     struct node *p = *h;

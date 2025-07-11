#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addatempty(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;

    return head;
}

struct node *atthebeg(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->prev = NULL;
    temp->prev = head;
    head->prev = temp;
    head = temp;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addatempty(head, 56);
    head = atthebeg(head, 5248);
    ptr = head;
    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
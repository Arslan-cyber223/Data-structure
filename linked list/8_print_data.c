#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link->link = current;

    void print_data(struct node * head);
    if (head == NULL)
        printf("Linked list is Empty!");
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
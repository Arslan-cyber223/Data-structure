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
    current->data = 29;
    current->link = NULL;
    head->link->link = current;

    struct node *add_big(struct node * head, int d);
    int d = 78;
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = d;
        ptr->link = NULL;

        ptr->link = head;
        head = ptr;
    }
    void count_of_nodes(struct node * head);
    int count = 0;
    if (head == NULL)
        printf("Linked list is EMPTY!");
    struct node *pt = NULL;
    pt = head;
    while (pt != NULL)
    {
        count++;
        pt = pt->link;
    }
    printf("Number of nodes in Linked List is %d", count);

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
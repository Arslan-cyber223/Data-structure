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

    void at_the_end(struct node * head, int data);
    int data = 85;
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

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
    
    
}
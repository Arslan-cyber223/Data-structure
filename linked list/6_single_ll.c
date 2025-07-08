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

    // method 1 for adding new node
    // struct node *current2 = (struct node *)malloc(sizeof(struct node));
    // current2->data = 3;
    // current2->link = NULL;
    // current->link = current2;

    // method 2 to add new node
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link->link = current;

    printf("%d", head->data);
    printf("\n%d", current->data);
    // printf("\n%d", current2->data);
    return 0;
}
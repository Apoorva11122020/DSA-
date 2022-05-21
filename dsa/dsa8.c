#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletefirst(struct node *first)
{
    struct node *ptr = first;
    first = first->next;
    free(ptr);
    return first;
}
struct node *deleteatbetween(struct node *first, int index)
{
    struct node *p = first;
    struct node *q = first->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return first;
}
struct node *deleteatbetweenwithvalue(struct node *first, int value)
{
    struct node *p = first;
    struct node *q = first->next;
   while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return first;
}
struct node *deleteatend(struct node *first)
{
    struct node *p = first;
    struct node *q = first->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    return first;
}
int main(int argc, char const *argv[])
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 6;
    first->next = second;
    second->data = 55;
    second->next = third;
    third->data = 89;
    third->next = fourth;
    fourth->data = 99;
    fourth->next = NULL;
    printf("linkedlist before : \n");
    linkedlisttraversal(first);
    // printf("after deleting first node\n");
    // first=deletefirst(first);
    // linkedlisttraversal(first);
    // printf("after deleting in between\n");
    // first=deleteatbetween(first,1);
    // linkedlisttraversal(first);
    printf("list after deletion at end\n");
    first = deleteatbetweenwithvalue(first,55);
    linkedlisttraversal(first);
    return 0;
}

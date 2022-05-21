#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
//traversal
void linkedlisttraversal(struct  node *first){
    struct node *ptr=first;
    printf("element : %d\n",ptr->data);
    ptr=ptr->next;
    do
    {
       printf("element : %d\n",ptr->data);
       ptr=ptr->next;
    }while (ptr!=first);
}
int main(int argc, char const *argv[])
{
   struct  node *first;
    struct  node *second;
    struct  node *third;
    struct  node *fourth;
   first=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));
   fourth=(struct node *)malloc(sizeof(struct node));
    first->data=6;
    first->next=second;
    second->data=55;
    second->next=third;
    third->data=89;
    third->next=fourth;
    fourth->data=99;
    fourth->next=first; 
    return 0;
}

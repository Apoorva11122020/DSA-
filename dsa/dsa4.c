//linkedlist

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
//traversal
void linkedlisttraversal(struct  node *ptr){
    while (ptr!=NULL)
    {
       printf("element : %d\n",ptr->data);
       ptr=ptr->next;
    }
    
}
//insertion at first
struct node *insertatfirst(struct  node *first,int data){
 struct node *ptr= (struct node *)malloc(sizeof(struct node));
            ptr->data=data;
            ptr->next=first;
            return ptr;
}
//insert in between
struct node *insertatbetween(struct node *first, int data, int index){
    struct node *ptr= (struct node *)malloc(sizeof(struct node));
    struct node *p=first;
    int i=0;
    while (i!=index-1)
    {
      p=p->next;
      i++;  
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return first;    
}
//insert at end
struct node *insertatend(struct  node *first,int data){
 struct node *ptr= (struct node *)malloc(sizeof(struct node));
    struct node *p=first;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    
            ptr->data=data;
            p->next=ptr;
            ptr->next=NULL;
            return first;
}
//insert after a node
struct node *insertafternode(struct  node *first,struct node *previousnode,int data){
 struct node *ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=previousnode->next;
    previousnode->next=ptr;
    return first;
  
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
    fourth->next=NULL;
    printf("linkedlist before : \n");
    linkedlisttraversal(first);
   first=insertatfirst(first,43);
     printf("linkedlist after inserting at first : \n");
    linkedlisttraversal(first);
    first=insertatbetween(first,44,1);
    printf("linkedlist after inserting in between : \n");
    linkedlisttraversal(first);
    printf("linkedlist after inserting at end : \n");
   first= insertatend(first,90);
    linkedlisttraversal(first);
    printf("linkedlist after inserting after node : \n");
   first= insertafternode(first,third,100);
    linkedlisttraversal(first);

    return 0;
}

//stack empty, full

#include <stdio.h>
#include <stdlib.h>
struct stack {
   int size;
   int top;
   int *arr;    
};
int isempty(struct stack *ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
   else{
        return 0;
   }
}
int main(int argc, char const *argv[])
{
    struct stack *s;
    s->size=2;
    s->top=-1;
     s->arr = (int *)malloc(s->size * sizeof(int));

    if (isempty(s))
    {
        printf("the stack is empty\n");
    }
    else{
        printf("the stack is not empty");
    }
    s->arr[0] = 7;
    s->top++;
    s->arr[1]=4;
    s->top++;
 
    if (isfull(s))
    {
        printf("the stack is full\n");
    }
    else{
        printf("stack is not full\n");
    }
    return 0;
}

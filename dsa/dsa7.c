//stack pop push 

#include <stdio.h>
#include <stdlib.h>
struct stack{
     int size;
     int top;
     int *arr;
};
int stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackbottom(struct stack *ptr){
    return ptr->arr[0];
}
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
void push(struct stack *ptr,int value){
    if (isfull(ptr))
    {
       printf("stack overflow\n"); 
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr){
    if (isempty(ptr))
    {
       printf("stack underflow\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *ptr,int i){
    int result=ptr->top-i+1;
    if (result<0)
    {
        printf("this statement is not valid\n");
        return -1;
    }
    else{
        return ptr->arr[result];
    }
}
int main(int argc, char const *argv[])
{
    struct stack *sp =(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size * (sizeof(int)));
    printf("the stack is successful\n");
    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,88886);
    push(sp,57);
    push(sp,88);
    push(sp,9);
    push(sp,10);
    printf("the top element of stack is %d\n",stacktop(sp));
    printf("the bottom element of stack is %d\n",stackbottom(sp));
    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));
    printf("the popped item is %d \n",pop(sp));
    printf("the popped item is %d \n",pop(sp));
    for (int j = 1; j <=sp->top+1; j++)
    {
        printf("the value at index %d is %d\n",j,peek(sp,j));
    }
    
    return 0;
}

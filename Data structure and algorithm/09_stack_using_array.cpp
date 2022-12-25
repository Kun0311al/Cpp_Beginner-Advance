#include <iostream>
#include<stdlib.h>
using namespace std;
 
struct stack{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack ptr)
{
    if (ptr.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack ptr)
{
    if (ptr.top == ptr.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peak(struct stack ary){
    for (int i = 0; i < ary.top; i++)
    {
        cout<<ary.arr[i]<<endl;
    }
    return 0;

}

void push(struct stack ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr.top++;
        ptr.arr[ptr.top] = val;
    }
}

int pop(struct stack ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr.arr[ptr.top];
        ptr.top--;
        return val;
    }
}
 
int main()
{
    struct stack s;
    s.size = 20;
    s.top = -1;
    s.arr = (int *) malloc(s.size * sizeof(int));
  
    push(s, 23);
    push(s, 1);
    push(s, 99);
    push(s, 75);
    push(s, 3);
    push(s, 64);
    push(s, 57);
    push(s, 46);
    push(s, 89);
    push(s, 6);

    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s));

    return 0;
}

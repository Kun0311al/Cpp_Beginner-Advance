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

int push(struct stack ptr, int val){
    if(isFull(ptr)){
        cout<<"Stack Overflow! Cannot push to the stack\n";
    }
    else{
        ptr.top++;
        ptr.arr[ptr.top] = val;
    }
        return ptr.top;
}

int pop(struct stack ptr){
    int val;
    if(isEmpty(ptr)){
        cout<<"Stack Underflow! Cannot pop from the stack\n";
        return -1;
    }
    else{
        val = ptr.arr[ptr.top];
        ptr.top--;
        cout<<"Popped %d from the stack "<<val<<endl;
        return ptr.top;
    }
}
 
int main()
{
    struct stack s;
    s.size = 20;
    s.top = -1;
    s.arr = (int *) malloc(s.size * sizeof(int));
  
    s.top = push(s, 23);
    s.top = push(s, 1);
    s.top = push(s, 99);
    s.top = push(s, 75);
    s.top = push(s, 3);
    s.top = push(s, 64);
    s.top = push(s, 57);
    s.top = push(s, 46);
    s.top = push(s, 89);
    s.top = push(s, 6);

    int val;
    s.top = pop(s); 
    s.top = pop(s); 
    s.top = pop(s);

    return 0;
}

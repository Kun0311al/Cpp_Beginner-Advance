#include <iostream>
#include<stdlib.h>
using namespace std;
 

 //structure of stack
struct stack{
    int size;
    int top;
    int *arr;
};
 
//function to find the stack is empty or not
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
 
//function to find the stack is full or not
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

//fuction is use to push new element in the stack
int push(struct stack ptr, int val){
    if(isFull(ptr)){
        cout<<"Stack Overflow! Cannot push to the stack\n";
    }
    else{
        ptr.top++;
        ptr.arr[ptr.top] = val;
    }
        return ptr.top;//returning ptr.top to update the value of the top
}

//function to pop the element from the stack 
int pop(struct stack ptr){
    int val;
    if(isEmpty(ptr)){
        cout<<"Stack Underflow! Cannot pop from the stack\n";
        return -1;
    }
    else{
        val = ptr.arr[ptr.top];// store the deleting value
        ptr.top--;
        cout<<"Popped %d from the stack "<<val<<endl;
        return ptr.top;//returning top to update value of the top
    }
}


//function to give the value of the given index
int peek(struct stack ary, int i){
    if (ary.top-i+1 < 0)//top-i+1 gives the value of the actual index of that element in the stack
    {
        cout<<"stack is underflow\n";
        return -1;
    }else
    {
        return ary.arr[ary.top-i+1];
    }
    
    
}
 
int main()
{
    struct stack s;
    s.size = 20;
    s.top = -1;
    s.arr = (int *) malloc(s.size * sizeof(int));
  
  //pushing the elements in stack
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

    //poppin the elements fron the stack
    s.top = pop(s); 
    s.top = pop(s); 
    s.top = pop(s);

    //taking the value of the given index
    int val;
    val = peek(s, 3);
    cout<<val<<endl;

    return 0;
}

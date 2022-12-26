#include<iostream>
using namespace std;

//structure of the array
struct stack{
    int top;
    int size;
    char* arr;
};

//check array is full or not
int isfull(struct stack* ary){
    if (ary->top == ary->size-1)
    {
        return 1; 
    }
        return 0;    
}

//check array is empty or not
int isempty(struct stack* ary){
    if (ary->top == -1)
    {
        return 1; 
    }
        return 0;
    
}

//push into stack
void push(struct stack* ary, char val){
    if (isfull(ary))
    {
        cout<<"stack is full\n";
    }else{
        ary->top++;
        ary->arr[ary->top]=val;
    }   
}

//pop from stack
char pop(struct stack* ary){
    char val = ary->arr[ary->top];
    ary->top--;
    return val;
}

//function to match the parenthesis
int parenthisismatch(char* exp){
    //initialising the stack
    struct stack* s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 20;
    s->top = -1;
    s->arr = (char*) malloc(s->size*sizeof(char));

    for(int i = 0; exp[i]!='\0'; i++){
        if (exp[i]=='(')
        {
            push(s, '(');
        }else if (exp[i]==')')
        {
            if (isempty(s))
            {
                return 0;
            }
            pop(s);            
        }
    }
    if (isempty(s))
    {
        return 1;
    }return 0;
    
}

int main(){
    char * exp = "((8)(*--$$9))";//expression for the checking
    if (parenthisismatch(exp))
    {
        cout<<"this is balanced expression\n";
    }else{
        cout<<"this is not a balanced expression\n";
    }
    return 0;
}
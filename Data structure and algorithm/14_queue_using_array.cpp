#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isfull(struct queue* ary){
    if (ary->r = ary->size-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int is(struct queue* ary){
    if (ary->r = ary->size-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

void enqueue(struct queue* ary, int val){
    if (!isfull(ary))
    {
        cout<<"queue is already full\n";
    }
    else
    {
        ary->r++;
        ary->arr[ary->r] = val;
    }
    
}

int main(){
    struct queue* q;
    q->size = 20;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    enqueue(q, 23);

    return 0;
}
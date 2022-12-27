#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

void enqueue(struct queue* ary, int val){
    if ((ary->r+1)%ary->size == ary->f)
    {
        cout<<"array is full\n";
    }
    else
    {
        ary->r = (ary->r+1)%ary->size;
        ary->arr[ary->r] = val;
    }
    
}

int dequeue(struct queue* ary){
    int val = -1;
    if (ary->f == ary->r)
    {
        cout<<"array is empty\n";
    }
    else
    {
        ary->f = (ary->f+1)%ary->size;
        val = ary->arr[ary->f];
    }
    return val;
}

int main(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    enqueue(q, 10);
    enqueue(q, 3);
    enqueue(q, 16);

    int val;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
}
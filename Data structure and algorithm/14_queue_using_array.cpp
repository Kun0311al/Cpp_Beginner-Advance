#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isfull(struct queue* ary){
    if (ary->r == ary->size-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int isempty(struct queue* ary){
    if (ary->r == ary->f)
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

int dequeue(struct queue* ary){
    int val;
    if (!isempty(ary))
    {
        cout<<"list is already empty\n";
    }
    else
    {
        ary->f++;
        val = ary->arr[ary->f];
        return val;
    }
    return 0;
}

int main(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 20;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    enqueue(q, 23);
    enqueue(q, 10);
    enqueue(q, 3);

    int val;
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;

}
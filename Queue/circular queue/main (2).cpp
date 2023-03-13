/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size){
   
    q->size=size;
    q->Q=new int [q->size];
    q->front=q->rear=0;
}

void enqueue(struct queue *q,int x){
    if((q->rear+1)%q->size == q->front){
        cout<<"queue is full";
    }else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear)
        cout<<"queue is empty";
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }return x;
}

void display(struct queue q){
    int i=q.front+1;
    
    do{
        cout<<q.Q[i]<<",";
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    cout<<endl;
}

int isEmpty(struct queue q){
    if(q.front==q.rear){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct queue q){
    if((q.rear+1)%q.size == q.front){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    struct queue q;
   
    
    create(&q,5);
    
    enqueue(&q,3);
    enqueue(&q,5);
    enqueue(&q,7);
    enqueue(&q,9);
    
     display(q);
     cout<<endl;
    
    dequeue(&q);
    dequeue(&q);
    
    display(q);
    cout<<endl;
    
    enqueue(&q,7);
    enqueue(&q,9);
    
    display(q);
     cout<<endl;
    
    cout<<isEmpty(q)<<endl;

    cout<<isFull(q);
   

    return 0;
}
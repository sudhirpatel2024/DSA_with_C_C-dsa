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
    q->front=q->rear=-1;
}

void enqueue(struct queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"queue is full";
    }else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear){
      cout<<"queue is empty"; 
    }else{
        q->front++;
        x=q->Q[q->front];
    }return x;
}

void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<",";
    }
}

int isFull(struct queue q){
    if(q.rear==q.size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct queue q){
    if(q.front==q.rear){
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    struct queue q;
    // cout<<"enter size";
    // cin>>q.size;                 //  without create function
    // q.Q=new int [q.size];
    // q.front=q.rear=-1;
    
    create(&q,4);
    
//    enqueue(&q,3);
//    enqueue(&q,5);
//    enqueue(&q,7);
//    enqueue(&q,9);
    
     display(q);
     cout<<endl;
    
    dequeue(&q);
    
    display(q);
    cout<<endl;
    
    cout<<isEmpty(q)<<endl;

    cout<<isFull(q);
   

    return 0;
}

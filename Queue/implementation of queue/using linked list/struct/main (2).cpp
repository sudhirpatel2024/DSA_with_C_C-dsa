
#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"Queue is full";
    }else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    node *p;
    if(front==NULL){
        cout<<"Queue is empty";
    }else{
        p=front;
        front=front->next;
        x=p->data;
        free(p);
    }return x;
}

void display(){
    struct node *p=front;
    while(p){
        cout<<p->data<<",";
        p=p->next;
    }
}
int main(){
    struct node p;
    
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    
    display();
    cout<<endl;
    
    dequeue();
    dequeue();
    display();
    
  
    
    return 0;
}

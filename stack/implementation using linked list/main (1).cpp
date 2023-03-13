/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*top=NULL;


void display(){
    struct node *p;
    p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void push(int x){
    struct node *t=new node;
    
    if(t==NULL){
        cout<<"stack over flow" ;
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct node *p;
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty";
    }else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }return x;
} 

int peek(int pos){
    int x=-1;
    struct node *p=top;
    for(int i=0; i<pos-1;i++){
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }else{
        return -1;
    }
}

int stackTop(){
    if(top){
        return top->data;
    }else{
        return -1;
    }
}

int isEmpty(){
    return top ? 0 : 1;
}

 int isFull(){
     node *t=new node;
     int r=t ? 1:0;
     free(t);
     return r;
 }




int main()
{   
    push(3);
    push(2);
    push(1);
    push(5);
    push(7);
    
    
    
   
    display();
    pop();
    cout<<endl;
     display();
     pop();
     cout<<endl;
     display();
    cout<<endl;
    cout<<isFull()<<endl;
    cout<<isEmpty();
    

    return 0;
}

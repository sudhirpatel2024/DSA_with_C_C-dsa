/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node{
  struct node *prev;
  int data;
  struct node *next;
}*first=NULL;

void create(int a[],int n){
    int i;
    
    struct node *t,*last;
    first=new node;
    first->data=a[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p){
        cout<<p->data<<"->";
        p=p->next;
    }
}

int count(struct node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }return c;
}


int Delete(struct node *p,int pos){
    struct node *q;
    int x=-1;
    if(pos<1 || pos>count(p)){
        return -1;
    }
    if(pos==1){
        q=first;
        x=first->data;
        first = first->next;
        delete p;
    }
    else{
        for(int i=0; i<pos-1; i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}


int main()
{
   int a[]={2,4,6,8,10};
   create(a,5);
   
   display(first);
   cout<<endl;
   
  
   cout<< Delete(first,1)<<endl;
   display(first);
   
   
   

    return 0;
}

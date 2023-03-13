

#include <iostream>

using namespace std;

struct node{
    int data;
   struct  node *next;
}*first=NULL;


void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}


void sortedInsert(struct node *p,int x){
    struct node *t,*q;
    
    t=new node;
    t->data=x;
    t->next=NULL;
    q=NULL;
    
      if(first==NULL)
       first=t;
      else
      {
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }else{
            t->data=x;
            t->next=q->next;
            q->next=t;
        }
    
      }
}

int main()
{
    
    
   sortedInsert(first,5);
    sortedInsert(first,7);
     sortedInsert(first,9);
      sortedInsert(first,1);
       sortedInsert(first,10);
        sortedInsert(first,18);
    
    display(first);
    
   

    return 0;
}

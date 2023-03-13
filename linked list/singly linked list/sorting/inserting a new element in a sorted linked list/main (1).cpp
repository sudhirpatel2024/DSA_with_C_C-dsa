

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


void create(int a[],int n){
    int i;
    struct node *t,*last;
      first=new node;
      first->data=a[0];
      first->next=NULL;
      last=first;

     for(i=1;i<n;i++){
          t=new node;
          t->data=a[i];
          t->next=NULL;
          last->next=t;
          last=t;
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
    int A[]={2,4,6,8,10};
    create(A,5);
    
   sortedInsert(first,5);
    
    display(first);
    
   

    return 0;
}

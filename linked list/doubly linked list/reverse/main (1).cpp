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
}*first=NULL,*second=NULL;

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


void reverse(struct node *p){
    struct node *q=NULL,*r=NULL;
    
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void recursivelyReverse(struct node *q,struct node *p){
    if(p){
        recursivelyReverse(p,p->next);
        p->next=q;
    }else
        first=q;
    
}

int main()
{
   int a[]={2,4,6,8,10};
   create(a,5);
   
   display(first);
   cout<<endl;
   
//   reverse(first);
//   display(first);
   
//   cout<<endl;
  
   
 recursivelyReverse(second,first);
   display(first);
   
   
   

    return 0;
}

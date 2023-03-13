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
}*first=NULL;

void create(int a[],int n){
    int i;
    struct node *last, *t;
    
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

void display(struct node *p){
    while(p){
        cout<<p->data<<"->";
        p=p->next;
    }
}


void removeExtra(struct node *p){
    struct node *q=p->next;
    while(q){
        if(p->data != q->data){
            p=q;
            q=q->next;
        }else{
           p->next=q->next;
           delete  q;
           q=p->next;
           
        }
    }
   
}



int main()
{
   int a[]={2,3,3,3,5,5,1,1,7,9};
   create(a,10);
   removeExtra(first);
   display(first);
   
   
   
   
   
    return 0;
}

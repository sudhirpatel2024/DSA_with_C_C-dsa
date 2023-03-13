/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n){
  
    struct node *last,*t;
    int i;
    
    first =new node;
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
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
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




int main()
{
    int a[]={2,4,6,3,5,8};
    create(a,6);
     display(first);
    cout<<endl;
    reverse(first);
    display(first);
    

    return 0;
}

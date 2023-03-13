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
}*first=NULL,*second=NULL;

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

void create1(int b[],int n){
  
    struct node *last,*t;
    int i;
    
    second =new node;
    second->data=b[0];
    second->next=NULL;
    last=second;
    
    for(i=1;i<n;i++){
        t=new node;
        t->data=b[i];
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








int main()
{
    int a[]={2,4,6,8,10,12};
    create(a,6);
    display(first);
    cout<<endl;
    
    int b[]={3,5,7,9,11,13};
    create1(b,6);
    display(second);

    
    
    
    

    return 0;
}

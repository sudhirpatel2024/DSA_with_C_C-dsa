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

int isSorted(struct node *p){
    int x=-32768;
    
    while(p){
        if(p->data<x){
            return 0;
        }else{
            x=p->data;
            p=p->next;
        }
    }
    return 1;
}



int main()
{
   int a[]={2,3,4,5,5,9};
   create(a,6);
   
   
   if(isSorted(first)){
       cout<<"linked list is sorted";
   }else{
       cout<<"not sorted";
   }
   
   
    return 0;
}

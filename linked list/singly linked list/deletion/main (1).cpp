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

void count(struct node *p){
    int c=0;
    
    while(p){
        c++;
        p=p->next;
    }
    cout<<c;
}

int Delete (int pos){
    struct node *p,*q;
    
    int x=-1;
    int i;
    
    if(pos==0){
        x=first->data;
        p=first;
        first=first->next;
        delete (p);
    }else{
        p=first;
        q=NULL;
        
        for(i=0;i<pos-1 && p;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            x=p->data;
            delete p;
        }
        
    }
    return x;
}



int main()
{
   int a[]={2,3,4,5,6,7};
   create(a,6);
   
   
   cout<<Delete(3);
   cout<<endl;
   
   display(first);
   
   
    return 0;
}

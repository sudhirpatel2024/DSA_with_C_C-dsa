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

int isLoop(struct node *p){
    struct node *q,*r;
    
    q=r=p;
    
    do{
        q=q->next;
        r=r->next->next;
        q=q!=NULL ? q->next : NULL;
    }
    while(q && r && q != r);
    
    if(p){
        return 1;
    }else{
        return 0;
    }
        
    
}


int main()
{
    int a[]={2,4,6,8,10,12};
    create(a,6);
    display(first);
    cout<<endl;
    cout<<isLoop(first);
   

    return 0;
}

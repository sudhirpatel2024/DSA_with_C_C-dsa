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
}*head;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    
    head=new node;
    head->data=a[0];
    head->next=head;
    last=head;
    
    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    do{
        cout<<p->data<<"->";
        p=p->next;
    }while(p != head);
}


int main()
{
    int a[]={2,4,6,8,10};
    create(a,5);
    display(head);
   

    return 0;
}

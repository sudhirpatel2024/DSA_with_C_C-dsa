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


int  count(struct node *p){
    int c=0;
    do{
        c++;
        p=p->next;
    }while(p != head);
    return c;
}

void insert(struct node *p,int pos,int x){
    struct node *t;
    int i;
    
    if(pos<0 || pos>count(p)){
        return;
    }
    if(pos==0){
        t=new node;
        t->data=x;
        
        if(head==NULL){
            head=t;
            head->next=head;
        }else{
            while(p->next != head){
                p=p->next;
            }
                p->next=t;
                t->next=head;
                head=t;
        }
    }else{
        for(i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

int main()
{
    int a[]={2,4,6,8,10};
    create(a,5);
    display(head);
    cout<<endl;
    insert(head,3,10);
    display(head);

    return 0;
}

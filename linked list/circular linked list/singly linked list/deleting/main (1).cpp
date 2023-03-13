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

int  Delete(struct node *p,int pos){
    struct node *q;
    int i;
    int x;
    
    if(pos<0 || pos>count(p)){
        return -1;
    }
    if(pos==1){
        while(p->next != head)
            p=p->next;
        x=head->data;
        if(head==p){
           free (head);
            head=NULL;
        }else{
            p->next=head->next;
            delete head;
            //free (head);
            head=p->next;
        }
    }else{
        for(i=0;i<pos-2;i++)
            p=p->next;
            q=p->next;
            p->next=q->next;
            x=q->data;
            delete q;
        
    }return x;
}

int main()
{
    int a[]={2,4,6,8,10};
    create(a,5);
    display(head);
    cout<<endl;
   cout<< Delete(head,1);
   cout<<endl;
    display(head);

    return 0;
}

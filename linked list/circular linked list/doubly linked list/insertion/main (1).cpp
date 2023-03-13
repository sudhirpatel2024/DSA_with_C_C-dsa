
#include <iostream>

using namespace std;

struct node {
   struct node *prev;
   int data;
   struct node *next;
}*first;

void create(int a[],int n){
    
    int i;
    struct node *t,*last;
    
    first=new node;
    first->data=a[0];
    first->prev=first;
    first->next=first;
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
    do{
        cout<<p->data<<"->";
        p=p->next;
    }while(p != first);
}

int count(struct node *p){
    int c=0;
    do{
       c++;
       p=p->next;
    }while(p != first);
    return c;
}

void insert(struct node *p,int pos,int x){
    struct node *t;
    int i;
    if(pos<0 || pos>count(p)){
        return ;
    }
    if(pos==0){
        t=new node ;
        t->data=x;
        if(first==NULL){
          first=t;
          first->next=first;
          first->prev=first;
        }else{
            while(p->next != first){
                p=p->next;
            }
            p->next=t;
            t->next=first;
            t->prev=first;
            first=t;
        }
    }else{
        for(i=0;i<pos-1;i++)
            p=p->next;
        t=new node;
        t->data= x;
        t->prev=p;
        t->next=p->next;
        if(p->next != first)
        p->next->prev=t;
        p->next=t;
    }
}




int main()
{
    int a[]={2,4,6,8,10};
    create(a,5);
    display(first);
    cout<<endl;
    insert(first,4,1);
    display(first);
    
   
    return 0;
}

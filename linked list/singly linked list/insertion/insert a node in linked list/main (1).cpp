

#include <iostream>

using namespace std;

struct node{
    int data;
   struct  node *next;
}*first=NULL;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}

int count(struct node *p){
    int l=0;
    while(p){
       l++;
       p=p->next;
    }
    return l;
}

void insert(struct node *p,int pos,int x){
    struct node *t;
    int i;
    
    if(pos<0 || pos>count(p))
       return ;
   
    t=new node;
    t->data=x;
    
    if(pos==0){
        t->next=first;
        first=t;
    }
    else{
        for(i=0;i<pos-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
int main()
{
    int a[]={10,5,7,1,8};
    create(a,5);
    insert(first,3,4);
    display(first);
    
   

    return 0;
}

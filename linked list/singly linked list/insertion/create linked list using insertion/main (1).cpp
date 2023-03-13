

#include <iostream>

using namespace std;

struct node{
    int data;
   struct  node *next;
}*first=NULL;


void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}



void insert(struct node *p,int pos,int x){
    struct node *t;
    int i;    
    
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
    
    insert(first,0,4);
    insert(first,1,6);
    insert(first,2,3);
    insert(first,0,7);
    insert(first,3,89);
    insert(first,5,49);
    
    
    display(first);
    
   

    return 0;
}

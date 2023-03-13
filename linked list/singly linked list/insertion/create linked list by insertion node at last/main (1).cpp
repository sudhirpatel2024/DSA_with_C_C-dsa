

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


void insertLast(int x){
    struct node *t=new node;
    struct node *last;
    

    t->data=x;
    t->next=NULL;
    
    if(first==NULL){
        first=last=t;
        
    }else{
        last->next=t;
        last=t;
    }
}

int main()
{
    
    
    insertLast (3);
    insertLast(4);
    insertLast(6);
    
    display(first);
    
   

    return 0;
}

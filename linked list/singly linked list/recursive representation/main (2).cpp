#include <iostream>
using namespace std;

struct node{
    int data;
   struct node *next;
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
        last=t;
    }
}

void rdisplay(struct node *p){
    if(p!=NULL){
        
        rdisplay(p->next);
        cout<<p->data<<"->";
    }
}

int main()
{
   int a[]={3,5,7,8,9};
   create(a,5);
   rdisplay(first);
   return 0;
}

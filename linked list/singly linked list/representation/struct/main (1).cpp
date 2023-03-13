

#include <iostream>

using namespace std;

struct node{
    int data ;
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
        last =t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}


int main()
{  
    struct Node *temp;

   int a[]={3,5,7,10,15};
   create(a,5);
   display(first);

    return 0;
}

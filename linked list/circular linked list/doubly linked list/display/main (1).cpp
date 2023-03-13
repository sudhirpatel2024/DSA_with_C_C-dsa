
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




int main()
{
    int a[]={2,4,6,8,10};
    create(a,5);
    display(first);
    cout<<endl;
    cout<<count(first);
   
    return 0;
}

#include <iostream>
using namespace std;

struct node{
    int data;
   struct node *next;
}*first=NULL;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    
   first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}




void min(struct node *p){
    int m=p->data;
    while(p){
        if(p->data<m)
        m=p->data;
        p=p->next;
    }cout<<m;
}






int main()
{
   int a[]={10,4,5,7,1};
   create(a,5);
   min(first);
     cout<<endl;
   
   return 0;
}

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


void max(struct node *p){
    int m=INT32_MIN;
    while(p){
        if(p->data>m)
        m=p->data;
        p=p->next;
    }cout<<m;
}

int Rmax(struct node *p){
    int x=0;
    if(p==0){
        return INT32_MIN;

    }else{
        x=Rmax(p->next);
        if(x>p->data){
            return x;
            
        }else{
            return p->data;
        }
    }
}




int main()
{
   int a[]={1,2,10,5,7,};
   create(a,5);
    max(first);
    cout<<endl;
    cout<<Rmax(first);
   return 0;
}

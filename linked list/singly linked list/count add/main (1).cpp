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


int count(struct node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}


int Rcount(struct node *p)
{
 if(p!=NULL)
 return Rcount(p->next)+1;
 else
 return 0;
}


void count1(struct node *p){
   int l=0;
 while(p) {
   l++;
   p=p->next;
  }
  cout<<l<<endl;
 }
 
 

void sum(struct node *p){
 int s=0;
  while(p!=NULL) {
    s+=p->data;
    p=p->next;
  }
  cout<< s<<endl;
}


int sum1(struct node *p)
{
 int s=0;
 
 while(p!=NULL)
 {
 s+=p->data;
 p=p->next;
 }
 return s;
}
int Rsum(struct node *p)
{
 if(p==NULL)
 return 0;
 else
 return Rsum(p->next)+p->data;
}




int main()
{
   int a[]={1,2,3,5,7};
   create(a,5);
    cout<<count(first)<<endl;
    cout<<Rcount(first)<<endl;
    count1(first);
    cout<<endl;
    
    
    sum(first);
    cout<<endl;
    cout<<sum1(first)<<endl;
    cout<<Rsum(first)<<endl;
   return 0;
}

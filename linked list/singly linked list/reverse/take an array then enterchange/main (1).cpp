/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n){
  
    struct node *last,*t;
    int i;
    
    first =new node;
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

int count(struct node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}

void reverse(struct node *p){
    int *a;
    int i=0;
    
//   a=(int *)malloc(sizeof(int)*count(p));
     a=new int[count(p)];  
    
    while(p){
        a[i]=p->data;
        p=p->next;
        i++;
    }
    
    p=first;
    i--;
   
    while(p){
        p->data=a[i--];
        p=p->next;
    }
}




int main()
{
    int a[]={2,4,6,8};
    create(a,4);
     display(first);
    cout<<endl;
    reverse(first);
    display(first);
    

    return 0;
}

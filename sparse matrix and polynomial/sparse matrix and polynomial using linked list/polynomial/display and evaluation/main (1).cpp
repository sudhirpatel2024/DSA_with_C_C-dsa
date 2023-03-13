/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

struct node {
    int coeff;
    int expo;
    struct node *next;
}*poly=NULL;

void create(){
    struct node *t,*last;
    int i,num;
    
    cin>>num;
    
    for(i=0;i<num;i++){
        t=new node ;
        cin>>t->coeff>>t->expo;
        t->next=NULL;
        if(poly==NULL){
            poly=last=t;
        }else{
            last->next=t;
            last=t;
        }
    }
}

void display(struct node *p){
    while(p){
        cout<<p->coeff<<"x"<<p->expo<<"+";
        p=p->next;
    }cout<<endl;
}

long Eval(struct node *p, int x){
    long val=0;

    while(p){
     val+=p->coeff*pow(x,p->expo);
     p=p->next;
    }
 return val;
}


int main()
{
    create();
    display(poly);
    cout<<Eval(poly,1);
    return 0;
}

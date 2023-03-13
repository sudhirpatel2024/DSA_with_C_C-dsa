/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

struct node{
    int data;
    struct node *next;
}*top=NULL;


void display(){
    struct node *p;
    p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void push(int x){
    struct node *t=new node;
    
    if(t==NULL){
        cout<<"stack over flow" ;
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct node *p;
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty";
    }else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }return x;
} 

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }else{
        return 1;
    }
}

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2;
    }else{
        return 0;
    }
}

int Eval(char *postfix){
    int i;
    int x1,x2,r=0;
    
    for(i=0;postfix[i] != '\0';i++){
        if(isOperand(postfix[i])){
            push(postfix[i]-'0');
        }else{
            x2=pop();x1=pop();
        switch(postfix[i])
           {
               case '+':r=x1+x2; break;
               case '-':r=x1-x2; break;
               case '*':r=x1*x2; break;
               case '/':r=x1/x2; break;
            }
             push(r);

        }
    }return top->data;
    
}

int main()
{
   char *postfix="234*+82/-";

          printf("Result is %d\n",Eval(postfix)); 
    

    return 0;
}
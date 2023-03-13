#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;


struct node{
    int data;
    struct node *next;
}*top=NULL;

void push(char x){
    struct node *t;
    t=new node;
    
    if(t==NULL){
      cout<<"stack overflow";
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void pop(){
    struct node *p;
    char x=-1;
    
    if(top==NULL){
        cout<<"stack underflow";
    }else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
}

int isBalanced(char *expa){
    int i;
    for(i=0;expa[i]!='\0';i++){
        if(expa[i]=='('){
            push(expa[i]);
        }else if(expa[i]==')'){
            if(top==NULL)
                return 0;
            pop();
        }
    }if(top==NULL){
        return 1;
    }else{
        return 0;
    }
        
        
}


int main()
{
    char *expa="(((a+b)*(c-d))";
    cout<<isBalanced(expa);


    return 0;
}

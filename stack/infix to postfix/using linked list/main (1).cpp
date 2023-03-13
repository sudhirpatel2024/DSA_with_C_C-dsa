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

char *convert(char *infix){
    
    char *postfix=new char[strlen(infix)+2];
    int i,j;
    i=j=0;
    
    while(infix[i] != '\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }else{
            if(pre(infix[i])> pre(top->data)){
                push(infix[i++]);
            }else{
                postfix[j++]=pop();
            }
        }
    }
    
    while(top!=NULL)
    postfix[j++]=pop();
   
    postfix[j]='\0';
    return postfix;
}


int main()
{
    
    char *infix="a+b*c-d/e";
    push('#');

    char *postfix=convert(infix);

    cout<<postfix<<" "; 

    return 0;
}

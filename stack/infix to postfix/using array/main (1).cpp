
#include <iostream>
#include <cstring>
using namespace std;

struct  stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *st){
    cout<<"enter size of stack";
    cin>>st->size;
    st->top=-1;
    st->s=new int [st->size];
}

void display(struct stack st){
    int i;
    for(i=st.top;i>=0;i--){
        cout<<st.s[i]<<" ";
        cout<<endl;
    }
}

void push(struct stack *st,char x){
    if(st->top==st->size-1){
        cout<<"stack overtflow";
    }else{
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"stack underflow";
    }else{
        x=st->s[st->top];
        st->top--;
    }
}

int stackTop(struct stack st){
    if(st.top==-1){
        return -1;
    }else{
        return st.s[st.top];
    }
}

int isEmpty(struct stack st){
    if(st.top==-1){
        return 1;
    }else{
        return 0;
    }
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
    struct stack st;
    char *postfix=new char[strlen(infix)+2];
    int i,j;
    i=j=0;
    
    while(infix[i] != '\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }else{
            if(pre(infix[i])> pre(stackTop(st))){
                push(&st,infix[i++]);
            }else{
                postfix[j++]==pop(&st);
            }
        }
    }
    
    while(isEmpty(st))
    postfix[j++]=pop(&st);
   
    postfix[j]='\0';
    return postfix;
}



int main()
{
    struct stack st;
    char *infix="a+b*c-d/e";
    push(&st,'#');

    char *postfix=convert(infix);

    cout<<convert; 

    return 0;
}

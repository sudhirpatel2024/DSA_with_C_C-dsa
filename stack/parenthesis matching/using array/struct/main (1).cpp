#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct stack{
    int size;
    int top;
    char *s;
};

void push(struct stack *st,char x){
    if(st->top==st->size-1){
        cout<<"stack overflow";
    }else{
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(struct stack *st){
    char x=-1;
    if(st->top==-1){
        cout<<"stack under flow";
    }else{
        x=st->s[st->top];
        st->top--;
    }
}

int isEmpty(struct stack st){
    if(st.top==-1){
        return 1;
    }else{
        return 0;
    }
}


int isBalanced(char *expa){
   struct stack st;
   st.size=strlen(expa);
   st.top=-1;
   st.s=new char[st.size];
   
   for(int i=0;expa[i]!='\0';i++){
       if(expa[i]=='('){
           push(&st,expa[i]);
       }else if(expa[i]==')'){
           if(isEmpty(st)){
               return 0;
           }else{
               pop(&st);
           }
       }
   }if(isEmpty(st)){
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

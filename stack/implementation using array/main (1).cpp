/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *st){
    cout<<"enter size";
    cin>>st->size;
    st->top=-1;
    st->s=new int [st->size];
}

void display(struct stack st){
    int i;
    for( i=st.top;i>=0;i--)
    cout<<st.s[i]<<" ";
    cout<<endl;
}

void push(struct stack *st,int x){
    if(st->top==st->size-1)
    cout<<"stack overflow";
    else{
        st->top++;
       st->s[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1)
    cout<<"stack is empty";
    else{
        x=st->s[st->top];
        st->top--;
    }return x;
}

int peek(struct stack *st,int pos){
    int x=-1;
    if(st->top-pos+1<0){
        cout<<"invalid position";
    }else{
        x=st->s[st->top-pos+1];
        
    }return x;
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

int isFull(struct stack st){
    if(st.top==st.size-1){
        return 1;
    }else{
        return 0;
    }
}




int main()
{
    struct stack st;
    create(&st);
    
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    
    pop(&st);
    cout<<isFull(st)<<endl;
    
    cout<<isEmpty(st)<<endl;
    
    display(st);
    
    return 0;
}

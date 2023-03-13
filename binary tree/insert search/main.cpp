/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct node{
    struct node *lchild;
    int data ;
    struct node *rchild;
}*root=NULL;


void insert(int key){
    struct node *t=root;
    struct node *r=NULL,*p;
    
    if(root==NULL){
      p=new node;
      p->data=key;
      p->lchild=p->rchild=NULL;
      root=p;
      return;
    }
    
    while(t!=NULL){
        r=t;
        if(key<t->data)
           t=t->lchild;
        else if(key>t->data)
           t=t->rchild;
        else
            return;
    }
    
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    
    if(key<r->data)
       r->lchild=p;
    else 
       r->rchild=p;
}

void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<< " " ;
        inorder(p->rchild);
    }
}

struct node * search(int key){
    struct node *t=root;
    while(t){
        if(key==t->data)
            return t;
        else if(key<t->data)
            return t=t->lchild;
        else
            t=t->rchild;
        
    }return NULL;
}

int main()
{    struct node *temp;  
    insert (10);
    insert(5);
     insert(20);
      insert(8);
       insert(30);
        
    inorder(root);
    cout<<endl;
    
    temp=search(28);
    if(temp != NULL){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    
   
    return 0;
         
}
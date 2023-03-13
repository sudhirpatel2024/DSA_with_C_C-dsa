/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

struct node *Rinsert(struct node *p,int key){
    struct node *t;
    if(p==NULL){
        t=new node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    
    if(key<p->data){
        p->lchild=Rinsert(p->lchild,key);
    }else if(key>p->data){
        p->rchild=Rinsert(p->rchild,key);
    }
    return p;
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

int hight(struct node *p){
    int x,y;
    if(p==NULL){
    return 0;
    }
    x=hight(p->lchild);
    y=hight(p->rchild);
    return x>y?x+1:y+1;
}

struct node *inPre(struct node *p){
    while(p && p->rchild != NULL){
      p=p->rchild;
      }return p;
}

struct node *inSucc(struct node *p){
    while(p && p->lchild != NULL){
      p=p->lchild;
     } return p;
}

struct node *Delete (struct node *p,int key){
    struct node *q;
    if(p==NULL)return NULL;
    if(p->lchild==NULL && p->rchild==NULL){
        if(p==root){
            root=NULL;
            }free(p);
            return NULL;
    }
    
    if(key<p->data){
        p->lchild=Delete(p->lchild,key);
    }else if(key>p->data){
        p->rchild=Delete(p->rchild,key);
    }
    else{
        if(hight(p->lchild) > hight(p->rchild)){
            q=inPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }else{
            q=inSucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }return p;
}

int main()
{
   struct node *temp;  
   root=Rinsert(root,10);
   Rinsert(root,5);
   Rinsert(root,20);
   Rinsert(root,8);
   Rinsert(root,30);
   
   Delete(root,20);
  
  
        
   
        
    inorder(root);
    cout<<endl;
    
    temp=search(20);
    if(temp != NULL){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    

    return 0;
}

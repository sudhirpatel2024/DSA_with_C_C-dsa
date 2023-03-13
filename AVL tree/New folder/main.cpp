/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>



struct node{
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
}*root=NULL;


int NodeHeight(struct node *p){
    int hl,hr;
    hl=p && p->lchild ? p->lchild->height : 0;
    hr=p && p->rchild ? p->rchild->height : 0;
    
    return hl>hr ? hl+1 : hr+1;
}

int BalanceFactor(struct node *p){
    int hl,hr;
    hl=p && p->lchild ? p->lchild->height : 0;
    hr=p && p->rchild ? p->rchild->height : 0;
    
    return hl-hr;
}

struct node * LLRotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    
    pl->rchild=p;
    p->lchild=plr;
    
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    
    if(root==p)
        root=pl;
    
    return pl;
}

struct node * LRRotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    
    plr->lchild=pl;
    plr->rchild=p;
    
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    plr->height=NodeHeight(plr);
    
     if(root==p)
        root=plr;
    
    return plr;
    
}

struct node * RRRotation(struct node *p){
    return NULL;
}

struct node * RLRotation(struct node *p){
    return NULL;
}

struct node *Rinsert(struct node *p,int key){
    struct node *t=NULL;
    if(p==NULL){
        t=new node;
        t->data=key;
        t->height=1;
        t->lchild=t->rchild=NULL;
        return t;
    }
    
    if(key<p->data){
        p->lchild=Rinsert(p->lchild,key);
    }else if(key>p->data){
        p->rchild=Rinsert(p->rchild,key);
    }
    
    p->height=NodeHeight(p);
    
    if(BalanceFactor(p)==2 &&BalanceFactor(p->lchild)==1)
        return LLRotation(p);
    
    else if(BalanceFactor(p)==2 &&BalanceFactor(p->lchild)==-1)
        return LRRotation(p);
    
    else if(BalanceFactor(p)==-2 &&BalanceFactor(p->rchild)==-1)
        return RRRotation(p);
    
    else if(BalanceFactor(p)==-2 &&BalanceFactor(p->rchild)==1)
        return RLRotation(p);
    
    
    return p;
}

int main()
{
    root=Rinsert(root,50);
    Rinsert(root,10);
    Rinsert(root,20);
    
    return 0;
}

  
    


#include <iostream>
using namespace std;

struct node{
    int data;
   struct node *next;
}*first=NULL;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}

struct node * search(struct node *p,int key){
    while (p){
        if(key==p->data)
            return p;
            p=p->next;
        
    }return NULL;
}

struct node * Rsearch(struct node *p,int key){
    if(p==NULL)
    return NULL;
   if(key==p->data)
    return p;
    return Rsearch(p->next,key);
    
}

struct node* Lsearch(struct node *p,int key){
	
    struct node *q;
    
    while(p!=NULL){
    	if(key==first->data){
    		return p;
		}
		if  (key==p->data){        	 
            q->next=p->next;
            p->next=first;
            first=p;
            return p; 
       }
        q=p;
        p=p->next;
    }return NULL;
    
    
}






int main()
{  struct node *temp;
   int a[]={10,5,7,1,8};
   create(a,5);
//   temp=Rsearch(first,10);

//   temp=search(first,0);

     temp=Lsearch(first,8);
   
   if(temp){
       cout<<"key is found "<<temp->data<<endl;
   }else{
      cout<<"key not found";
   }
   
   display(first);
   
   
   
   
   return 0;
}

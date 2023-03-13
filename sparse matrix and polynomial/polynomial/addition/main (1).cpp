#include <iostream>

using namespace std;

struct term{
  int coeff;
  int expo;
};

struct polynomial{
  int n;
  struct term *t;
};

void create(struct polynomial *p){
    int i;
    cout<<"no of non-zero element "<<endl;
    cin>>p->n;
    p->t=new term[p->n];
    cout<<"enter polynomial term "<<endl;
    for(i=0;i<p->n;i++){
        cin>>p->t[i].coeff>>p->t[i].expo;
    }
}

void display(struct polynomial p){
    int i;
    for(i=0;i<p.n;i++)
        cout<<p.t[i].coeff<<"x"<<p.t[i].expo<<"+";
     
 
    cout<<endl;
}

struct polynomial *add(struct polynomial *p1,struct polynomial *p2){
   struct polynomial *sum;
   sum=(struct polynomial *)malloc(sizeof(struct polynomial));
   sum->t=(struct term *)malloc((p1->n+p2->n)*sizeof(struct term));
   
   int i,j,k;
   i=j=k=0;
   
   while(i<p1->n && j<p2->n ){
       if(p1->t[i].expo > p2->t[j].expo){
           sum->t[k++]=p1->t[i++];
       }else if(p1->t[i].expo < p2->t[j].expo){
           sum->t[k++]=p2->t[j++];
       }else{
           sum->t[k].expo=p1->t[i].expo;
           sum->t[k++].coeff=p1->t[i++].coeff + p2->t[j++].coeff;
        } 
           
       }
       
       for(;i<p1->n;i++){
           sum->t[k++]=p1->t[i];
       }
       for(;j<p2->n;j++){
           sum->t[k++]=p2->t[j];
       }
   
   
   sum->n=k;
   return sum;
    
}

int main()
{
   struct polynomial p1,p2,*p3;

 create(&p1);
 create(&p2);

 p3=add(&p1,&p2);

 cout<<endl;
 display(p1);
cout<<endl;
 display(p2);
 cout<<endl;
 display(*p3);
    
    return 0;
}

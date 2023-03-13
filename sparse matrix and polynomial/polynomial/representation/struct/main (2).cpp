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
int main()
{
    struct polynomial p1;
    create(&p1);
    display(p1);
    
    return 0;
}

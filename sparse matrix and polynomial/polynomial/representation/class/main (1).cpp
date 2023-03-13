
#include <iostream>

using namespace std;


class term{
    public:
           int coeff;
           int expo;
};

class polynomial{
    private:
               int n;
               term *t;
    public:
           polynomial(int n ){
               this->n=n;
               t=new term[this->n];
           }
           ~polynomial(){
               delete [] t;
           }
           
           void create(){
               int i;
                cout<<"no of non-zero element "<<endl;
                cin>>n;
                t=new term[n];
                cout<<"enter polynomial term "<<endl;
                for(i=0;i<n;i++){
                cin>>t[i].coeff>>t[i].expo;
                }
           }
           
           void display(){
              int i;
              for(i=0;i<n;i++)
              cout<<t[i].coeff<<"x"<<t[i].expo<<"+";
     
 
              cout<<endl;
            } 
 };
            

int main()
{
    polynomial p(4);
    p.create();
    p.display();

    return 0;
}

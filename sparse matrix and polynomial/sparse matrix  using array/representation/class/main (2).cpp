/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class element{
    public:
           int i;
           int j;
           int x;
};

class sparse{
   private: 
           int m;
           int n;
           int num;
           element *e;
   public:
          sparse(int n,int m,int num){
              this->n=n;
              this->m=m;
              this->num=num;
              e=new element[this->num];
          }
          
          ~ sparse (){
              delete [] e; 
          }
          
          void create(){
              cout<<"enter non-zero element";
              for(int i=0;i<num;i++){
                  cin>>e[i].i>>e[i].j>>e[i].x;
              }
          }
          
          void display(){
              
              int k=0;
              
              for(int i=1;i<=n;i++){
                  for(int j=1;j<=m;j++){
                      if(i==e[k].i  && j==e[k].j){
                          cout<<e[k++].x<<" ";
                      }else{
                          cout<<"0 ";
                      }
                  }cout<<endl;
              }
          }
};
int main()
{
    sparse s(5,5,5);
    s.create();
    s.display();

    return 0;
}

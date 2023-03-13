/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class lowerTri{
  private:
          int n;
          int *a;
  public:
        lowerTri(){
            int n=2;
            a=new int[2*(2+1)/2];
        }
        lowerTri(int n){
            this->n=n;
            a=new int[n*(n+1)/2];
        }
        void set(int i,int j,int x);
        
        int get(int i,int j);
        
        void display();
        
        ~lowerTri(){
            delete []a;
        }
};

void lowerTri::set(int i,int j,int x){
    if(i<=j){
        a[j*(j-1)/2 +(i-1)]=x;
    }
}

int lowerTri::get(int i,int j){
    if(i<=j){
        return a[j*(j-1)/2 +(i-1)];
    }else{
        return 0;
    }
}

void lowerTri::display(){
  int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                cout<<a[j*(j-1)/2 +(i-1)]<<" ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}


int main()
{
     lowerTri l(4); 
    
    //  l.set(1,1,2); l.set(1,2,3); l.set(1,3,2);
    //  l.set(1,4,4);    l.set(2,2,2);    l.set(2,3,3);
    //  l.set(2,4,2);    l.set(3,3,3);    l.set(3,4,2);
    //  l.set(4,4,3);
    
    
    int i,j,x;
    int n=4;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                cin>>x;
                l.set(i,j,x);
            }
        }cout<<endl;
    }
    
    
     l.display();
   

    return 0;
}

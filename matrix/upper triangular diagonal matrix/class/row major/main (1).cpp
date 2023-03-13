/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class upperTri{
  private:
          int n;
          int *a;
  public:
        upperTri(){
            int n=2;
            a=new int[2*(2+1)/2];
        }
        upperTri(int n){
            this->n=n;
            a=new int[n*(n+1)/2];
        }
        void set(int i,int j,int x);
        
        int get(int i,int j);
        
        void display();
        
        ~upperTri(){
            delete []a;
        }
};

void upperTri::set(int i,int j,int x){
    if(i<=j){
        a[(n*(i-1))-(i-2)*(i-1)/2 +(j-i)]=x;
    }
}

int upperTri::get(int i,int j){
    if(i<=j){
        return a[(n*(i-1))-(i-2)*(i-1)/2 +(j-i)];
    }else{
        return 0;
    }
}

void upperTri::display(){
  int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                cout<<a[(n*(i-1))-(i-2)*(i-1)/2 +(j-i)]<<" ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}


int main()
{
     upperTri l(4); 
    
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

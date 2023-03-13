/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class TriDiagonal{
  private:
          int n;
          int *a;
  public:
        TriDiagonal(){
            int n=2;
            a=new int[2*(2+1)/2];
        }
       TriDiagonal(int n){
            this->n=n;
            a=new int[n*(n+1)/2];
        }
        void set(int i,int j,int x);
        
        int get(int i,int j);
        
        void display();
        
        ~TriDiagonal(){
            delete []a;
        }
};

void TriDiagonal::set(int i,int j,int x){
     if(i-j==0){
       a[n+i-2]=x;
    }else if(j-i==1){
        a[2*n+i-2]=x;
    }else if(i-j==1){
        a[i-1]=x;
    }
}

int TriDiagonal::get(int i,int j){
    if(i-j==0){
       return a[n+i-2];
    }else if(j-i==1){
        return a[2*n+i-2];
    }else if(i-j==1){
        return a[i-1];
    }else{
        return 0;
    }
}

void TriDiagonal::display(){
  int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(i-j==0){
       cout<< a[n+i-2];
    }else if(j-i==1){
        cout<< a[2*n+i-2];
    }else if(i-j==1){
        cout<< a[i-1];
    }else{
        cout<<0;
    }   
        }cout<<endl;
    }
}


int main()
{
     TriDiagonal l(5); 
    
    //  l.set(1,1,2); l.set(1,2,3); l.set(1,3,2);
    //  l.set(1,4,4);    l.set(2,2,2);    l.set(2,3,3);
    //  l.set(2,4,2);    l.set(3,3,3);    l.set(3,4,2);
    //  l.set(4,4,3);
    
    
    int i,j,x;
    int n=5;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(i-j==1 || j-i==1  || i-j==0){
             cin>>x;
             l.set(i,j,x);
         }
        }cout<<endl;
    }
    
    
     l.display();
   

    return 0;
}
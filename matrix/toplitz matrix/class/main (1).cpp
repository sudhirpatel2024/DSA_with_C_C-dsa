/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class toplitz{
  private:
          int n;
          int *a;
  public:
        toplitz(){
            int n=2;
            a=new int[2*(2+1)/2];
        }
       toplitz(int n){
            this->n=n;
            a=new int[n*(n+1)/2];
        }
        void set(int i,int j,int x);
        
        int get(int i,int j);
        
        void display();
        
        ~toplitz(){
            delete []a;
        }
};

void toplitz::set(int i,int j,int x){
     if(i<=j){
       a[j-i]=x;
    }else if(i>j){
        a[n+i-j-1]=x;
    }
}

int toplitz::get(int i,int j){
    if(i<=j){
       return a[j-i];
    }else if(i>j){
        a[n+i-j-1];
    }else{
        return 0;
    }
}

void toplitz::display(){
  int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(i<=j){
       cout<<a[j-i];
    }else if(i>j){
        cout<<a[n+(i-j-1)];
    }else{
        cout<<0;
    }   
        }cout<<endl;
    }
}


int main()
{
     toplitz l(5); 
    
//     l.set(1,1,2); l.set(1,2,3); l.set(1,3,4);
//     l.set(1,4,5);    l.set(1,5,6);    l.set(2,1,7);
//     l.set(3,1,8);    l.set(4,1,9);    l.set(5,1,10);
     
    
    
     int i,j,x;
     int n=5;
    
     for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
           if(i==1|| j==1){
           	cin>>x;
              l.set(i,j,x);
		   }
              
          
         }cout<<endl;
     }
    
    
     l.display();
   

    return 0;
}

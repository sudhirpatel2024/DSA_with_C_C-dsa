/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct matrix{
    int a[10];
    int n;
};

void set(struct matrix *m,int i,int j,int x){
    if(i==j){
        m->a[i-1]=x;
    }
}

int get(struct matrix m,int i,int j){
    if(i==j){
        return m.a[i-1];
    }else{
        return 0;
    }
}

void display(struct matrix m){
    int i,j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                cout<<m.a[i]<<" ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}

int main(){
    
    struct matrix m;
    m.n=4;
   set(&m,1,1,2); set(&m,2,2,3); set(&m,3,3,4); set(&m,4,4,5);  
    display(m);
    
    cout<<endl;
    cout<<get(m,4,4);
  
    return 0;
}


























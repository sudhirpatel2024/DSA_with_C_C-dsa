/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct matrix{
  int *a;
  int n;
};

void set(struct matrix *m, int i, int j,int x){
    if(i>=j){
        m->a[i*(i-1)/2 +(j-1)]=x;
    }
}

int get(struct matrix m,int i,int j){
    if(i>=j){
        return  m.a[i*(i-1)/2+(j-1)];
    }else{
        return 0;
    }
}

void display(struct matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                cout<< m.a[i*(i-1)/2+(j-1)]<<" ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}

int main(){
   struct matrix m;
 int i,j,x;

 
 m.n=4;
 
  m.a=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
  
//  for(i=1;i<=m.n;i++){
//      for(j=1;j<=m.n;j++){
//          if(i>=j){
//              cin>>x;
//              set(&m,i,j,x);
//          }
//      }
//  }
 
  set(&m,1,1,2); set(&m,2,2,3); set(&m,3,3,4); set(&m,4,4,5);
   set(&m,2,1,2); set(&m,3,1,3); set(&m,3,2,4); 
   set(&m,4,1,2); set(&m,4,2,3); set(&m,4,3,4); 
    
 


 display(m);
    
    
  
    return 0;
}







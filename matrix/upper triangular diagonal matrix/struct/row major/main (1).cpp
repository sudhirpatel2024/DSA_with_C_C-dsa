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

void set (struct matrix *m,int i,int j,int x){
    if(i<=j){
       m->a[(m->n*(i-1))-(i-2)*(i-1)/2 +(j-i)]=x;
    }
}

int get (struct matrix m,int i, int j){
    if(i<=j){
        return m.a[(m.n*(i-1))-(i-2)*(i-1)/2 +(j-i)];
    }else{
        return 0;
    }
}

void display(struct matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i<=j){
            cout<<m.a[(m.n*(i-1)-(i-2)*(i-1)/2)+(j-i)]<<" ";
            }else{
               cout<<"0 ";
            }
                
        }cout<<endl;
    }
}
int main()
{
 struct matrix m;
 int i,j,x;

 
 m.n=4;
 
  m.a=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
  
//  for(i=1;i<=m.n;i++){
//      for(j=1;j<=m.n;j++){
//          if(i<=j){
//              cin>>x;
//              set(&m,i,j,x);
//          }
//      }
//  }
 
 set(&m,1,1,2); set(&m,1,2,3); set(&m,1,3,4); set(&m,1,4,5);
   set(&m,2,2,2); set(&m,2,3,3); set(&m,2,4,4); 
   set(&m,3,3,2); set(&m,3,4,3); set(&m,4,4,4); 

 display(m);
    
    return 0;
}

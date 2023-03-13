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
    if(i-j==0){
       m->a[m->n+i-2]=x;
    }else if(j-i==1){
        m->a[2*m->n+i-2]=x;
    }else if(i-j==1){
        m->a[i-1]=x;
    }
}

int get (struct matrix m,int i, int j){
   if(i-j==0){
       return m.a[m.n+i-2];
    }else if(j-i==1){
        return m.a[2*m.n+i-2];
    }else if(i-j==1){
        return m.a[i-1];
    }else{
        return 0;
    }
}

void display(struct matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
         if(i-j==0){
       cout<< m.a[m.n+i-2];
    }else if(j-i==1){
        cout<< m.a[2*m.n+i-2];
    }else if(i-j==1){
        cout<< m.a[i-1];
    }else{
        cout<<0;
    }   
                
        }cout<<endl;
    }
}
int main()
{
 struct matrix m;
 int i,j,x;

 
 m.n=5;
 
  m.a=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
  
 for(i=1;i<=m.n;i++){
     for(j=1;j<=m.n;j++){
         if(i-j==1 || j-i==1  || i-j==0){
             cin>>x;
             set(&m,i,j,x);
         }
     }
 }
 
//  set(&m,1,1,2); set(&m,1,2,3); set(&m,2,1,4); set(&m,2,3,5);
//   set(&m,2,2,2); set(&m,3,2,3); set(&m,3,4,4); 
//   set(&m,3,3,2); set(&m,4,3,3); set(&m,4,4,4); 
//   set(&m,4,5,4); 
//   set(&m,5,4,4); 
//   set(&m,5,5,4); 

 display(m);
    
    return 0;
}

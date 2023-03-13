/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



int main()
{ 
    
    
    
    
  char a[]="sudhir patel";
  char b[15];
  int i;
  for(i=0;a[i]!='\0';i++){
       
  }i=i-1;
  
  // 1st method 
  
//   int j;
//   for(j=0;i>=0;j++,i--){
//       b[j]=a[i];
//   }b[j]='\0';
//   cout<<b;

    // 2nd method
    
    char t;
    int j;
    for(j=0;j<i;i--,j++){
        t=a[j];
        a[j]=a[i];
        a[i]=t;
    }cout<<a;
  
    
    return 0;
}

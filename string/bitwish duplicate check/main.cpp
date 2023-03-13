/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  char a[]="finding";
  long int h=0;
  long int x=0;
  
  int i;
  
  for(i=0;a[i]!='\0';i++){
      x=1;
      x=x<<(a[i]-97);
      if((x&h)>0){
          cout<<a[i]<<" ";
      }else{
          h=(x|h);
      }
  }

    return 0;
}

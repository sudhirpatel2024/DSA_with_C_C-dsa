/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char a[]="sudhir";
    char b[]="sduhri";
    
    int i;
    int j;
    int c=0;
    for(i=0;a[i]!='\0';i++){
        
    }
    for(j=0;b[j]!='\0';j++){
            
    }
    if(i==j){
       for(i=0;a[i]!='\0';i++){
           for(j=0;b[j]!='\0';j++){
               if(a[i]!=b[j]){
                
               }else{
                   c++;
               }
           }
       }
       if(c>=i){
           cout<<"anagram";
       }
       
    }else{
          cout<<" not anagram";
}
       
    
   
   
    
    
    

    return 0;
}

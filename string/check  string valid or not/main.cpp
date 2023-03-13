/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int valid(char *a){
    int i;
    for(i=0;a[i]!='\0';i++){
        if(!(a[i]>=65 && a[i]<=90) && !(a[i]>=97 && a[i]<=122) && !(a[i]>=48 && a[i]<=57)){
            return 0;
        }
    }return 1;
}

int main()
{     
    char *a="ani123";
    if(valid(a)){
        cout<<"valid user name";
    }else{
        cout<<"invalid user name";
    }
    
    return 0;
}

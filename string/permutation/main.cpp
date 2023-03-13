/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// void permutation(char s[],int k){
//     char a[10]={0};
//     char res[10];
//     int i;
    
//     if(s[k]=='\0'){
//         res[k]='\0';
//         cout<<res;
//     }
//     else{
//         for(i=0;a[i]!='\0';i++){
//             if(a[i]==0){
//                 res[k]=s[i];
//                 a[i]=1;
//                 permutation(s,k+1);
//                 a[i]=0;
//             }
//         }
//     }
    
// }
// int main()
// {
    // char s[]="abc";
    // permutation(s,0);

//     return 0;
// }

// swaping method


void permutation(string s,int l,int h){
    if(l==h){
        cout<<s<<" ";
    }else{
        for(int i=l;i<=h;i++){
            swap(s[l],s[i]);
            permutation(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}

int main(){
    string s="abc";
    int n=s.size();
    permutation(s,0,n-1);
    return 0;
}


























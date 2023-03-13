/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{    // table

    // int n,i;
    // cin>>n;
    // for(i=1;i<11;i++){
    //     cout <<n<<"x"<<i<<"="<< n*i <<endl;
    // }
    
    
    
       // sum of n number


    // int n;
    // int i=1;
    
    // cin>>n;
    
    // int sum=0;
    
    // for(i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum;
    
    // while(i<=n){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;
    
    // do{
    //     sum=sum+i;
    //     i++;
    // }while(i<=n);
    // cout<<sum;

    // return 0;
    
    
    
    //factorial,  of n number
    
    
    
    // int n=5;
    // int i=1;
    // int fact=1;
    
    // for(i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    
    // while(i<=n){
    //     fact=fact*i;
    //     i++;
    // }
    
    // do{
    //     fact=fact*i;
    //     i++;
    // }while(i<=n);
    // cout<<fact;
    
    
    
    
    // factor
    
    
    
    // int i,n;
    // cin>>n;
    
    // for(i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    
    
    
    //perfect number
    
    // int i,n;
    // cin>>n;
    // int sum=0;
    
    // for(i=1;i<=n;i++){
    //     if(n%i==0){
    //         sum=sum+i;
    //     }
    // }
    // cout<<sum;
    // if(n*2==sum){
    //     cout<<"perfect number";
    // }else{
    //     cout<<"not a perect number";
    // }
    
    
    
    // for(i=1;i<n;i++){
    //     if(n%i==0){
    //         sum=sum+i;
    //     }
    // }
    // cout<<sum;
    // if(n==sum){
    //     cout<<"perfect number";
    // }else{
    //     cout<<"not a perect number";
    // }
    
    
    
    // check prime or composit
    
    int i,n;
    cin>>n;
    int count=0;
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime number";
    }else{
        cout<<"composit number or non prime number";
    }
    
    
    

    return 0;
}
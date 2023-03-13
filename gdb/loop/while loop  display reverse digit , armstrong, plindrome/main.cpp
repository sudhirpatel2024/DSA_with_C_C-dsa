/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{ // display reverse number

    int n;
    int r;

    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r;
    }

    // armstrong number

    //     int n;
    //     int r;
    //     int sum=0;

    //     cin>>n;
    //     int m=n;

    // while(n>0){
    //     r=n%10;
    //     n=n/10;
    //     sum=sum+r*r*r;
    // }
    //      if(sum==m){
    //          cout<<"armstrong";
    //      }
    //   else{
    //       cout<<"not armstrong";
    //   }

    // reverse number

    // int n;
    // int r;
    // int rev=0;

    // cin>>n;

    // while(n>0){
    //     r=n%10;
    //     n=n/10;
    //     rev=rev*10+r;

    // }
    // cout<<rev;

    // palindrome number

    //  int n;
    // int r;
    // int m;
    // int rev=0;

    // cin>>n;
    // m=n;

    // while(n>0){
    //     r=n%10;
    //     n=n/10;
    //     rev=rev*10+r;

    // }
    // if(rev==m){
    //     cout<<"palindrome";

    // }else{
    //     cout<<"not a palindrome";
    // }

    // GCD

    // int m,n;

    // cin>>m>>n;

    // while(m!=n){

    // 	if(m>n){
    // 		m=m-n;
    // 	}else {
    // 		n=n-m;
    // 	}
    // }
    // cout<<"GCD of two number is "<<m;

    // //print word from number

    return 0;
}

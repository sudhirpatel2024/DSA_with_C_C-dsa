/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  //    string str="malyallam";
  //    int count;
  //    int l=str.length();
  //    for(int i = 0; i <l; i++) {
  //      count = 1;
  //      for(int j = i+1; j < l; j++) {
  //        if(str[i] == str[j] ) {
  //        count++;
  //       str[j] = '\0';
  //      }
  //    }
  //    if(count > 1 && str[i] != '\0')
  //      cout<<str[i]<<" ";
  //    }

  char a[] = "raju";
  int i, j;
  int length = strlen(a);
  int b = (length + 1) / 2;
  int k = 0;

  for (i = length - 1, j = 0; i >= j;)
  {
    if (a[i--] == a[j++])
    {
      k = k + 1;
    }
  }

  if (b == k)
  {
    cout << "palindrome";
  }
  else
  {
    cout << "not";
  }

  return 0;
}

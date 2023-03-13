/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

struct Element
{
 int i;
 int j;
 int x;
};
struct Sparse
{
 int m;
 int n;
 int num;
 struct Element *e;
};
void create(struct Sparse *s)
{
   int i;

    cout<<"Eneter Dimensions";
    cin>>s->m>>s->n;
    cout<<"Number of non-zero";
    cin>>s->num;

    s->e=new Element[s->num];
    
    cout<<"Eneter non-zero Elements";
    for(i=0;i<s->num;i++)
    cin>> s->e[i].i >> s->e[i].j >> s->e[i].x ;

}
void display(struct Sparse s)
{
 int i,j,k=0;

 for(i=1;i<=s.m;i++)
 {
    for(j=1;j<=s.n;j++)
   {
   if(i==s.e[k].i && j==s.e[k].j)
    cout<<s.e[k++].x<< " ";
   else
    cout<<"0 ";
   }
   cout<<endl;
 }
}

int main()
{
    struct Sparse s;
	create(&s);
	display(s);
	
    

    return 0;
}

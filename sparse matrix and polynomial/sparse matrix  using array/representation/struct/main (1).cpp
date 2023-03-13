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
 struct Element *ele;
};
void create(struct Sparse *s)
{
 int i;

 printf("Eneter Dimensions");
 scanf("%d%d",&s->m,&s->n);
 printf("Number of non-zero");
 scanf("%d",&s->num);

 s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
 printf("Eneter non-zero Elements");
 for(i=0;i<s->num;i++)
 scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);

}
void display(struct Sparse s)
{
 int i,j,k=0;

 for(i=1;i<=s.m;i++)
 {
 for(j=1;j<=s.n;j++)
 {
 if(i==s.ele[k].i && j==s.ele[k].j)
 printf("%d ",s.ele[k++].x);
 else
 printf("0 ");
 }
 printf("\n");
 }
}

int main()
{
    struct Sparse s;
	create(&s);
	display(s);
	
    

    return 0;
}

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main(){
//	int a=10;
//	int &r=a;
//	cout<<a<<endl;
//	r++;
//	cout<<r;
//	


int a=10;
int &r=a;

int b=30;
r=b;

cout<<a<<endl<<r<<endl;
	return 0;
}

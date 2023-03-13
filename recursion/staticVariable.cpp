#include <iostream>
using namespace std;

int fun(int n){
	static int x=0;
	if(n>0){
		x++;
		return fun(n-1)+x;
	}
	return 0;
}
int main(){
	
	int a;
	a=fun(5);
	printf("%d ",a);
	
	a=fun(5);
	printf("%d ",a);
	
	return 0;
}


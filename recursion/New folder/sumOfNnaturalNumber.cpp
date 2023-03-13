#include <iostream>

int  sum(int n){
	if(n==0){
		return 0;	
	}
//	return sum(n-1)+n;
    return (n*(n+1))/2;	
}
int main() {
	int r=sum(10);

	printf("%d ",r);	
	
	return 0;
}




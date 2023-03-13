#include <iostream>

//int fib(int n){
//	if(n<=1){
//		return n;
//	}
//	else{
//		return fib(n-2)+fib(n-1);
//	}
//}
//
//int main(){
//	int y=fib(7);
//	printf("%d ",y);
//	
//	return 0;
//}

int f[10];
int fib(int n){
	if(n<=1){
		f[n]=n;
		return n;
	}
	else {
	if (f[n-2]==-1)
		f[n-2]=fib(n-2);	
	if(f[n-1]==-1)
		f[n-1]=fib(n-1);
		f[n]=f[n-2]+f[n-1];
	
		return f[n-2]+f[n-1];
	}
	
}


int main(){
	
	int i;
    for(i=0;i<10;i++){
	
    f[i]=-1;}
	
	printf("%d ",fib(7));
	
	
	
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;


//void swap(int &x,int &y){
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;	
//	
//}
//int main(){
//	int a=10;
//	int b=20;
//	swap(a,b);
//	printf("%d  %d",a,b);
//	
//	
//	return 0;
//}



//void swap(int *x,int *y){
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;	
//	
//}
//int main(){
//	int a=10;
//	int b=20;
//	swap(&a,&b);
//	printf("%d  %d",a,b);	
//	return 0;
//}



//int add(int x,int y){
//	int z;
//	z=x+y;
//	
//	return z;	
//	
//}
//int main(){
//	int num1=10,num2=20,sum;
//	sum=add(num1,num2);
//	
//	cout<<"sum is "<<sum;
//		
//	return 0;
//}



// arrays as parameter


//void fun(int a[ ]){
//	cout<<sizeof(a)/sizeof(int)<<endl;
//	
//}
//int main(){
//	int a[ ]={2,4,6,8,10};
//	int n=5;
//	fun(a);
//	cout<<sizeof(a)/sizeof(int)<<endl;
//	for(int x:a)
//	cout<<x<<" ";	
//	
//	return 0;
//}


//void fun(int a[ ]){
//	for(int i=0;i<5;i++)
//	cout<<a[i]<<endl;
//
//	
//}
//int main(){
//	int a[ ]={2,4,6,8,10};
//	int n=5;
//	fun(a);
//
//	for(int x:a)
//	cout<<x<<" ";	
//	
//	return 0;
//}


//void fun(int a[ ],int n){
//	for(int i=0;i<n;i++)
//	cout<<a[i]<<endl;
//
//	
//}
//int main(){
//	int a[ ]={2,4,6,8,10};
//	int n=5;
//	fun(a,n);
//
//	for(int x:a)
//	cout<<x<<" ";	
//	
//	return 0;
//}


//void fun(int *a,int n){
//	for(int i=0;i<n;i++)
//	cout<<a[i]<<endl;
//
//	
//}
//int main(){
//	int a[ ]={2,4,6,8,10};
//	int n=5;
//	fun(a,n);
//
//	for(int x:a)
//	cout<<x<<" ";	
//	
//	return 0;
//}


//void fun(int *a,int n){
//a[0]=15;
//
//	}
//int main(){
//	int a[ ]={2,4,6,8,10};
//	int n=5;
//	fun(a,n);
//
//	for(int x:a)
//	cout<<x<<" ";	
//	
//	return 0;
//}


//int  * fun(int size){
//	int *p;
//	p=new int[size];
//	
//	for(int i=0;i<size ;i++)
//		p[i]=i+1;
//		return p;
//}
//
//int main(){
//	int *ptr,sz=5;
//	ptr=fun(sz);
//	for(int i=0;i<sz;i++){
//		cout<<ptr[i]<<endl;
//		
//	}
//	
//		
//	
//	return 0;
//}





//structure  as an parameter

//struct rectangle{
//	int length;
//	int breadth;
//	
//};
//void fun(struct rectangle r){
//	r.breadth=20;
//	r.length=14;
//	cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
//}
//int main(){
//	struct rectangle r={10,5};
//	fun(r);
//	
//	printf("length %d\nbreadth %d\n",r.length,r.breadth);
//	
//	
//	return 0;
//}


//struct rectangle{
//	int length;
//	int breadth;
//	
//};
//void fun(struct rectangle *p){
//	p->breadth=37;
//	cout<<"length "<<p->length<<endl<<"breadth "<<p->breadth<<endl;
//}
//int main(){
//	struct rectangle r={10,5};
//	fun(&r);
//	
//	printf("length %d\nbreadth %d\n",r.length,r.breadth);
//	
//	
//	return 0;
//}




//struct rectangle{
//	int length;
//	int breadth;
//	
//};
//struct rectangle *fun(){
//	struct rectangle *p;
//	p=new rectangle;
////	p=(struct rectangle *)malloc(sizeof(struct rectangle));
//	p->breadth=7;
//	p->length=15;
//	
//	return p;
//
//}
//int main(){
//	struct rectangle *ptr=fun();
//	cout<<"length"<<ptr->length<<endl<<"breadth"<<ptr->breadth<<endl;
//	
//	
//	return 0;
//}



 
































#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

/* int main(){
//	int a=10;
//	int* p;
//	p=&a;	
//	cout<<a<<endl;
//	printf("using pointer %d",*p);
//	printf("using pointer %d",p,&a);



//  int a[5]={2,4,6,8,10};
//  int* p;
//  p=a;
//  
//  for(int i=0;i<5;i++){
////  	cout<<a[i]<<endl;
//  	cout<<p[i]<<endl;
//  }


//   int* p;
//   p=(int*)malloc(5*sizeof(int));
//   
//   p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
//   for(int i=0;i<5;i++){
////  	cout<<a[i]<<endl;
//  	cout<<p[i]<<endl;
//  }


//int* p;
//   p=new int[5];
//   
//   p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
//   for(int i=0;i<5;i++){
////  	cout<<a[i]<<endl;
//  	cout<<p[i]<<endl;
//  }


//int* p;
//   p=new int[5];
//   
//   p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
//   for(int i=0;i<5;i++){
////  	cout<<a[i]<<endl;
//  	cout<<p[i]<<endl;
//  }
//  
//  delete [ ] p;
//  free(p);
// 

*/ 

//struct rectangle{
//	int length;
//	int breadth;
//};
//int main(){
//
//int* p1;
//char* p2;
//float* p3;
//double* p4;
//struct rectangle *p5;
//cout<<sizeof(p1)<<endl;
//cout<<sizeof(p2)<<endl;
//cout<<sizeof(p3)<<endl;
//cout<<sizeof(p4)<<endl;
//cout<<sizeof(p5)<<endl;


struct rectangle{
	int length;
	int breadth;
};
int main(){
//	struct rectangle r={10,15};
//	cout<<r.length<<endl;
//	cout<<r.breadth<<endl;
//	
//	struct rectangle *p=&r;
//	cout<<p->length<<endl;
//	cout<<p->breadth<<endl;\



//struct rectangle *p;
//p=(struct rectangle *)malloc(sizeof(struct rectangle));
//p->length=14;
//p->breadth=15;
//cout<<p->length<<endl;
//	cout<<p->breadth<<endl;


//struct rectangle *p;
//p=new rectangle;
//p->length=14;
//p->breadth=15;
//cout<<p->length<<endl;
//	cout<<p->breadth<<endl;

struct rectangle *p;
p=new rectangle;
(*p).length=14;
(*p).breadth=15;
cout<<p->length<<endl;
	cout<<p->breadth<<endl;

	

  
  


	
	return 0;
}

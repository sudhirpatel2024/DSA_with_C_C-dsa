#include <iostream>
#include <stdio.h>
using namespace std;

//int main(){
//	int length=0;int breadth=0;
//	printf("enter length and breadth");
//	cin>>length>>breadth;
//	int area=length*breadth;
//	int perimeter=2*(length+breadth);
//	
//	printf("area=%d\nperimeter=%d\n",area,perimeter);
//	
//	return 0;
//}



//modular program 


//int area(int length, int breadth){
//	return length*breadth;
//}
//
//int perimeter(int length,int breadth ){
//	int p;
//	p=2*(length+breadth);
//	return p;
//}
//
//int main(){
//	int length=0;int breadth=0;
//	
//	printf("enter length and breadth");
//	cin>>length>>breadth;
//	
//	int a=area(length,breadth);
//	
//	int peri=perimeter(length,breadth);
//	
//	printf("area=%d\nperimeter=%d\n",a,peri);
//	
//	return 0;
//}



// structure and funtion

//struct rectangle{
//	int length;
//	int breadth;
//};
//
//int area(struct rectangle r){
//	return r.length*r.breadth;
//}
//
//int perimeter( rectangle r ){
//	int p;
//	p=2*(r.length+r.breadth);
//	return p;
//}
//
//int main(){
//	struct rectangle r={0,0};
//	
//	
//	printf("enter length and breadth");
//	cin>>r.length>>r.breadth;
//	
//	int a=area(r);
//	
//	int peri=perimeter(r);
//	
//	printf("area=%d\nperimeter=%d\n",a,peri);
//	
//	return 0;
//}




//struct rectangle{
//	int length;
//	int breadth;
//};
//void initialise(struct rectangle *r,int l,int b){
//	r->length=l;
//	r->breadth=b;
//	
//}
//
//int area(struct rectangle r){
//	return r.length*r.breadth;
//}
//
//int perimeter( rectangle r ){
//	int p;
//	p=2*(r.length+r.breadth);
//	return p;
//}
//
//int main(){
//	struct rectangle r={0,0};
//	
//	int l,b;
//	
//	
//	printf("enter length and breadth");
//	cin>>l>>b;
//	
//	initialise(&r,l,b);
//	
//	int a=area(r);
//	
//	int peri=perimeter(r);
//	
//	printf("area=%d\nperimeter=%d\n",a,peri);
//	
//	return 0;
//}


//object oriented pogramming

//struct rectangle{
//	int length;
//	int breadth;
//
//void initialise(int l,int b){
//	length=l;
//	breadth=b;	
//}
//
//int area(){
//	return length*breadth;
//}
//
//int perimeter(  ){
//	int p;
//	p=2*(length+breadth);
//	return p;
//}
//};
//
//int main(){
//	 rectangle r={0,0};
//	
//	int l,b;
//	
//	
//	printf("enter length and breadth");
//	cin>>l>>b;
//	
//	r.initialise(l,b);
//	
//	int a=r.area();
//	
//	int peri=r.perimeter();
//	
//	printf("area=%d\nperimeter=%d\n",a,peri);
//	
//	return 0;
//}



class rectangle{
	int length;
	int breadth;
	public:

void initialise(int l,int b){
	length=l;
	breadth=b;	
}

int area(){
	return length*breadth;
}

int perimeter(  ){
	int p;
	p=2*(length+breadth);
	return p;
}
};

int main(){
	 rectangle r;
	
	int l,b;
	
	
	printf("enter length and breadth");
	cin>>l>>b;
	
	r.initialise(l,b);
	
	int a=r.area();
	
	int peri=r.perimeter();
	
	printf("area=%d\nperimeter=%d\n",a,peri);
	
	return 0;
}







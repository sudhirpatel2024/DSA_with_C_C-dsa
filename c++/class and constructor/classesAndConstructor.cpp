#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;


//class rectangle{
//	private:
//		int length;
//		int breadth;
//	public:
//			rectangle(){
//				length=0;
//				breadth=0;
//				
//			}
//			rectangle(int l,int b){
//			 length=l;
//			 breadth=b;
//			}
//			int area(){
//				return length*breadth;
//			}
//			int perimeter(){
//				return 2*(length+breadth);
//			}
//			
//			void setLength(int l){
//				length=l;
//			}
//			void setBreadth(int b){
//				breadth=b;
//			}
//			int getLength(){
//				return length;				
//			}
//			int getBreadth(){
//				return breadth;
//			}
//			~rectangle(){
//				cout<<"destructor";
//			}
//			
//};
//int main(){
//	rectangle r(10,5);
//	cout<<"area "<<r.area()<<endl;
//	cout<<"perimeter "<<r.perimeter()<<endl;
//	
//	
//	return 0;
//}




class rectangle{
	private:
		int length;
		int breadth;
	public:
			rectangle(){
				length=0;
				breadth=0;
				
			}
			rectangle(int l,int b);
			int area();
			int perimeter();
			void setLength(int l){
				length=l;
			}
			void setBreadth(int b){
				breadth=b;
			}
			int getLength(){
				return length;				
			}
			int getBreadth(){
				return breadth;
			}
			~rectangle(){
				cout<<"destructor";
			}
			
};

rectangle::rectangle(int l,int b){
	length=l;
	breadth =b;
		
}
int rectangle::area(){
	return length*breadth;
}
int rectangle::perimeter(){
	return 2*(length+breadth);
}

int main(){
	rectangle r(10,5);
	cout<<"area "<<r.area()<<endl;
	cout<<"perimeter "<<r.perimeter()<<endl;
	
	
	return 0;
}




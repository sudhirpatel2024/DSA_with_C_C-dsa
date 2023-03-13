#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;



//class arithmetic{
//	private:
//		int a;
//		int b;
//	public:
//		arithmetic(int a,int b);
//		int add();
//		int sub();
//	
//};
//
//arithmetic::arithmetic(int a,int b){
//	this->a=a;
//	this->b=b;
//}
//arithmetic::add(){
//	int c;
//	c=a+b;
//	return c;
//}
//arithmetic::sub(){
//	int c;
//	c=a-b;
//	return c;	
//	
//}
//int main(){
//	
//	arithmetic ar(10,5);
//	cout<<ar.add()<<endl;
//	cout<<ar.sub()<<endl;
//	return 0;
//}



//template class

template<class T>

class arithmetic{
	private:
		T a;
		T b;
	public:
		 arithmetic(T a,T b);
		T add();
		T sub();
	
};

template<class T>

 arithmetic <T>::arithmetic( T a,T b){
	this->a=a;
	this->b=b;
}

template<class T>
T arithmetic<T>::add(){
	T c;
	c=a+b;
	return c;
}

template<class T>
T arithmetic<T>::sub(){
	T c;
	c=a-b;
	return c;	
	
}
int main(){
	
	arithmetic <float>ar(10.7888,5.67);
	cout<<ar.add()<<endl;
	cout<<ar.sub()<<endl;
	return 0;
}

#include <iostream>
using namespace std;


struct array{
	int a[10];
	int size;
	int length;
};

void display(struct array arr){
	int i;
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
	}
	
}

void  SetIndex(struct array *arr,int index,int y){
	if(index>=0 && index<arr->length)
		arr->a[index]=y;
		
	
}

int main(){
	struct array arr={{3,4,5,6,4,3,98,7,6,5},10,10};
	
		SetIndex(&arr,2,56);
		display(arr);
	
	return 0;

}

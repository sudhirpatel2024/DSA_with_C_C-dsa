#include <iostream>
using  namespace std;

struct array{
	int a[10];
	int size;
	int length;
};

void Display(struct array arr){
	int i;
	printf("elements are\n");
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
	}
	
}

void append(struct array *arr,int x){
	if(arr->length<arr->size){
		arr->a[arr->length++]=x;
	}
}
int main() {
	struct array arr={{2,3,4,5,6},20,5};
	
	append(&arr,10);
	
	Display(arr);
	
	
	return 0;
}

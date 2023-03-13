#include <iostream>
using  namespace std;

struct array{
	int a[20];
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

void insert(struct array *arr,int index,int x){
	int i;
	if(index>=0 && index <=arr->length)
	{
		for(i=arr->length;i>index;i--)
		arr->a[i]=arr->a[i-1];
		arr->a[index]=x;
		arr->length++;
		
	}
}
int main() {
	struct array arr={{2,3,4,5,6},20,5};
	
	insert(&arr,4,12);
	
	Display(arr);
	
	
	return 0;
}


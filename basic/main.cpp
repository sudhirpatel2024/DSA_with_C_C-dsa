#include <iostream>
using  namespace std;


struct array {
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

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int linearSearch(struct array *arr,int key){
	int i;
	for(i=0;i<arr->length;i++){
		if(key==arr->a[i]){
			swap(&arr->a[i],&arr->a[i-1]);
			return i-1;
		}
	}
	return -1;
	
}
int main(){
	struct array arr={{2,3,4,5,6},10,5};
	
	printf("%d\n",linearSearch(&arr,5));
	
	Display(arr);
	
	return 0;
	
	
}

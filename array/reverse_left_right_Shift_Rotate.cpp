#include <iostream>
using namespace std;


struct array{
	int a[10];
	int size ;
	int length;	
};

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	
}

void display(struct array arr){
	int i;
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
	}
	
}

void Reverse(struct array *arr){
	int i;
	int j;
	int *b;
	b=(int *)malloc(arr->length*sizeof(int));
	
	for(i=arr->length-1,j=0;i>=0;i--,j++){
		b[j]=arr->a[i];		
	}
	for(i=0;i<arr->length;i++){
		arr->a[i]=b[i];
	}
}

void swapReverse(struct array *arr){
	int i;
	int j;
	
	for(i=0,j=arr->length-1;i<j;i++,j--){
		int temp=arr->a[i];
		arr->a[i]=arr->a[j];
		arr->a[j]=temp;
		
//	    swap(&arr->a[i],&arr->a[j]);
	}
}





int main(){
	struct array arr={{3,4,5,6,4,3,98,7,6,5},10,10};
	
//		Reverse(&arr);

      swapReverse(&arr);


		display(arr);
	
	
	return 0;
}

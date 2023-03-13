#include <iostream>
using namespace std;


struct array{
	int a[10];
	int size;
	int length;
};

void display(struct array  arr){
	int i;
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
	}
}

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void insert(struct array *arr,int x){
	
	int i=arr->length-1;
	if( arr->length==arr->size)
	return ;
	while(i>=0 &&arr->a[i]>x)
	{
		arr->a[i+1]=arr->a[i];
		i--;
	}
	arr->a[i+1]=x;
	arr->length++;
}

int isSorted(struct array arr){
	int i=0;
	for(i=0;i<arr.length-1;i++){
		if(arr.a[i]<arr.a[i+1]){
			return 1;
		}
		else{
			return 0;
		}
	}
}


int reArrange(struct array *arr){
	int i=0;
	int j=arr->length-1;
	
	while(i<j){
		while(arr->a[i]<0){
			i++;
		}
		while(arr->a[j]>=0){
			j--;
			
		}
		if(i<j){
			swap(&arr->a[i],&arr->a[j]);
		}
	}
}
int main(){
	struct array arr={{1,3,-16,7,43,-256,76,98	},10,8	};
	
//	insert(&arr,19);   
//	display(arr);

// printf("%d \n",isSorted(arr)); 

   reArrange(&arr);
   display(arr);
	
	
	return 0;
}

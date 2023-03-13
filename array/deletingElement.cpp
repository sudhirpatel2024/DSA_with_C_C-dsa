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

int Delete(struct array *arr,int index){
	int i;
	int x=0;
	
	if(index>=0 && index <=arr->length)
	{    x=arr->a[index];
		for(i=index;i<arr->length-1;i++)
		arr->a[i]=arr->a[i+1];		
		arr->length--;
		
	}
	return x;
}
int main() {
	struct array arr={{2,3,4,5,6},20,5};
	
	printf("%d\n",Delete(&arr,1));
	
	Display(arr);
	
	
	return 0;
}



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
int main() {
	struct array arr={{2,3,4,5,6},20,5};
	
	Display(arr);
	
	
	return 0;
}


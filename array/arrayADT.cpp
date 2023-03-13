#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



struct array{
	int *a;
	int size;
	int length;
};

void Display(struct array arr){
	int i;
	printf("elements are\n");
	for(i=0;i<arr.length;i++){
		printf("%d",arr.a[i]);
	}
	
	
}
int main(int argc, char** argv) {
	struct array arr;
int n,i;
printf("Enter size of an array");
	scanf("%d",&arr.size);
	arr.a=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	
	printf("enter nomber of number");
	scanf("%d",&n);
	
	printf("Enter all elements");
	
	for(i=0;i<n;i++)
	scanf("%d",&arr.a[i]);
	arr.length=n;
	
   Display(arr);
	
	return 0;
}











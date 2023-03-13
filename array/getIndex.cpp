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
		printf("%d",arr.a[i]);
	}
	
}

int  GetIndex(struct array arr,int index){
	if(index>=0 && index<arr.length){
		return arr.a[index];
	}else return -1;
	
}





int main(){
	struct array arr={{3,4,5,6,4,3,98,7,6,5},10,10};
	
		printf("%d\n",GetIndex(arr,2));
		display(arr);
	
	return 0;

}

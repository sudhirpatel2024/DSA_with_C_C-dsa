#include <iostream>
using namespace std;

struct array{
	int a[20];
	int size;
	int length;
};

void display(struct array arr){
	int i;
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.a[i]);
	}
}

//itrative method


int binarySearch(struct array arr,int key){
	int l;
	int h;
	int mid;
	
	l=0; h=arr.length-1;
	
	while(l<=h){
		mid=(l+h)/2;
		
		if(key==arr.a[mid])
		return mid;
		
		else if(key<arr.a[mid])
		h=mid-1;
		
		else
		l=mid+1;
		
	}
	return -1;
	
	
}


//resursive method

int rBinarySearch(int a[],int l,int h,int key){

   int mid;
   
   if(l<=h){
   	mid=(l+h)/2;
   	
   	if(key==a[mid]){
   		return mid;
	   }
	else if(key<a[mid]){
		return rBinarySearch(a,l,mid-1,key);
	}
	else{
		return rBinarySearch(a,mid+1,h,key);
	}

   }	
}



int main(){
	
	struct array arr={{2,3,4,5,6},10,5};
	
	//printf("%d\n",binarySearch(arr,4));
	printf("%d\n ",rBinarySearch(arr.a,0,arr.length,5));
	
	display(arr);
	
	return 0;
	
}

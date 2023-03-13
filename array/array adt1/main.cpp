
#include <iostream>
using namespace std;

struct array {
  int a[20];
  int size;
  int length;
};

void display(struct array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout <<arr.a[i]<<" ";
    }
}

void swap(int *x,int *y){
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}


// append a value in array 


// void append(struct array *arr,int x){
//     if(arr->length<arr->size){
//         arr->a[arr->length++]=x;
//     }
// }

//inserting a value in given index

// void insert(struct array *arr,int index,int y){
//     int i;
//     if(index>=0 && index<=arr->length)
//     {
//         for(i=arr->length;i>index;i--)
//         {
//             arr->a[i]=arr->a[i-1];
//             arr->a[index]=y;
//             arr->length++;
        
//         }
//     }
// }


// deleting array index value

// int Delete(struct array *arr,int index){
// 	int i;
// 	int x=0;
	
// 	if(index>=0 && index <=arr->length)
// 	{    x=arr->a[index];
// 		for(i=index;i<arr->length-1;i++)
// 		arr->a[i]=arr->a[i+1];		
// 		arr->length--;
// 	}
// 	return x;
// }

//linear lSearch

// int  lSearch(struct array arr,int key ){
//         int i;
//     for(i=0;i<arr.length;i++)
//     {
//       if(key==arr.a[i])
//         return  i;
//     } 
//     return -1;
// }

// int  lSearch(struct array  *arr,int key ){
//     int i;
//     for(i=0;i<arr->length;i++)
//     {
//       if(key==arr->a[i])
//         return  i;
//     }
//     return -1;
//}


//binary Search

// int binSeaech(struct array arr,int key){
//   int l=0;
//  int h=arr.length-1;
//   int mid;
  
//   while(l<=h){
//       mid=(l+h)/2;
//       if(key==arr.a[mid])
//           return mid;
//       else if(key>arr.a[mid])
//          l=mid+1;
//       else
//           h=mid-1;
      
//   }return 0;
// }

int RbinSeaech(int a[],int l, int h,int key){
 int mid=0;
 if(l<=h){
     mid=(l+h)/2;
     if(key==a[mid]){
         return mid;
     }else if(key<a[mid]){
         return RbinSeaech(a,l,mid-1,key);
     }else{
         return RbinSeaech(a,mid+1,h,key);
     }
 } 
 return -1;
  
}
  




int main()
{
    struct array arr={{2,3,4,5,6,7},10,6};
    
    // append(&arr,13);
    
    // insert(&arr,4,10);
    
//   cout<<Delete(&arr,5);

    // cout<<lSearch(arr,6)<<endl;
    
    // cout<<binSeaech(arr,2)<<endl;
    
     cout<<RbinSeaech(arr.a,0,arr.length,6)<<endl;
    
    display(arr);
    
    return 0;
}

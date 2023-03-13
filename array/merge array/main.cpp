/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct array {
  int a[10];
  
  int size;
  int length;
};

void display(struct array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
}

struct array* merge(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    // struct array *arr3=new struct array[arr1->size+arr2->size];
  struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j])
            arr3->a[k++]=arr1->a[i++];
        else
         arr3->a[k++]=arr2->a[j++];
    }
    for(;i<arr1->length;i++){
        arr3->a[k++]=arr1->a[i];
    }
    for(;j<arr2->length;j++){
        arr3->a[k++]=arr2->a[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    
   
    return arr3;
    
}


int main()
{
    struct array arr1={{1,3,5,7,9},10,5};
    struct array arr2={{2,4,6,8,10},10,5};
    struct array *arr3;
    
    
    
    arr3=merge(&arr1,&arr2);
    
    display(*arr3);
  

    return 0;
}

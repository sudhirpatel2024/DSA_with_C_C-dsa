/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

 
 
struct array{
    int a[20];
    int size;
    int length;
}; 


void display(struct array arr1){
    for(int i=0;i<arr1.length;i++){
        cout<<arr1.a[i]<<endl;
    }
}

// if array is sorted and natural number  one element missing

int findMissingElement(struct array arr){
    int sum=0;
    int missingElement;
    for(int i=0;i<arr.length;i++){
       sum=sum+arr.a[i];
    }
    int x=0;
    for(int i=0;i<=arr.length+1;i++){
      x=i*(i+1)/2; 
    }
    missingElement=x-sum;
    return missingElement;
}

// sorted but not natural one element missing

void findMissingElement1(struct array *arr1){
    int l,h;
    int difference;
    l=arr1->a[0];
        difference=l-0;
    for(int i=0;i<=arr1->length;i++){
        if(difference !=arr1->a[i]-i){
            cout<<i+difference;
            break;
        }
    }
}

// sorted but not natural multeple element missing

void findMissingElement2(struct array *arr2){
    int l,h;
    int difference;
    l=arr2->a[0];
        difference=l-0;
    for(int i=0;i<=arr2->length;i++){
         if(difference!=arr2->a[i]-i){
            while(difference<arr2->a[i]-i){
                cout<<i+difference<<" ";
                difference++;
            }
        }
    }
}

//  unsorted array missing multeple element

struct array* findMissingElement3(struct array *arr3){
    
    
    struct array *arr4=(struct array *)malloc(sizeof(struct array));            // missing not found solution yet 
                                                                                // dsa video no-123
    for(int i=0;i<arr3->length;i++){
        arr4->a[i++]=arr3->a[i++];
    }
    for(int i=0;i<arr3->length;i++){
        if(arr4->a[i]==0){
            cout<< i;
        }
    }
    arr4->length=arr3->length;
    arr4->size=10;
    
    return arr4;
}









int main(){
    
    // struct array arr={{1,2,4,5,6,7,8,9,10,11,12,13},10,12};
    //cout<<findMissingElement(arr);
    
    // struct array arr1={{6,7,8,9,10,11,13,14},10,8};
    //findMissingElement1(&arr1);
    
    struct array arr3={{3,4,7,5,6,8,2},10,7};
    struct array *arr4;
    arr4=findMissingElement3(&arr3);
    display(*arr4);

  return 0;   
}

   



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
        cout<<arr.a[i]<<" ";
    }
}

struct  array* Union(struct array *arr1, struct array *arr2){
    int i,j,k;
    i=j=k=0;
    
    struct array *arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
        }else if(arr1->a[i]>arr2->a[j]){
            arr3->a[k++]=arr2->a[j++];
        }else{
            
            arr3->a[k++]=arr1->a[i++];
            j++;
        }
    }
        
        for(;i<arr1->length;i++){
            arr3->a[k++]=arr1->a[i];
        }
        for(;j<arr2->a[j];j++){
            arr3->a[k++]=arr2->a[j];
        }
        
        arr3->length=k;
        arr3->size=12;
        
        return arr3;
}


struct array* Intersection(struct array *arr1,struct array *arr2){
    
    int i,j,k;
    i=j=k=0;
    
    struct array* arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i] ==arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
            j++;
        }else if(arr1->a[i]>arr2->a[j]){
            i++;
            j++;
        }else{
            i++;
            j++;
        }
    }
      arr3->length=k;
        arr3->size=12;
        return arr3;
}

struct array* Difference(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=k=j=0;
    
    struct array* arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]==arr2->a[j]){
            i++;
            j++;
        }
        else if(arr1->a[i]>arr2->a[j]){
            j++;
        }else{
            arr3->a[k++]=arr1->a[i++];
          
        }
}
    for(;i<arr1->length;i++){
        arr3->a[k++]=arr1->a[i];
    }
    
    arr3->length=k;
    arr3->size=10;
    
    return arr3;
    
}





int main()
{
    struct array arr1={{2,3,5,7,9,10},10,6};
    struct array arr2={{4,6,7,9,10,11},10,6};
    struct array *arr3;
    
    // arr3=Union(&arr1,&arr2);
    
    // arr3=Intersection(&arr1,&arr2);
    
    arr3=Difference(&arr1,&arr2);
    
    display(*arr3);

    return 0;
}

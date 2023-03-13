
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
        cout<<arr.a[i]<<" ";
    }
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int  get(struct array arr,int index){
    
   if(index>=0 && index<=arr.length){
            return arr.a[index];
        }
    return 0;
}

int  set(struct array arr,int index,int x){
    if(index>=0 && index<=arr.length){
             return arr.a[index]=x;
    }
    return 0;
}

int max(struct array arr){
    int max=arr.a[0];
     int i;
    for(i=0;i<arr.length;i++){
       if(arr.a[i]>max){
           max=arr.a[i];
       }
    }
    return max;
}

int min(struct array arr){
    int min=arr.a[0];
     int i;
    for(i=0;i<arr.length;i++){
       if(arr.a[i]<min){
           min=arr.a[i];
       }
    }
    return min;
}

int sum(struct array arr ){
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++){
       sum=sum+arr.a[i];
    }
    return sum;
}
int avg(struct array arr ){
    int avg;
    int sum=0;
    int i;
    for(i=0;i<arr.length;i++){
       sum=sum+arr.a[i];
    }
    return sum/arr.length;
    
}

// void reverse(struct array *arr){
//     int i,j;
//     int *b=new  int[arr->size];
//     for(i=arr->length-1,j=0;i>=0,j<arr->length;i--,j++){
//       b[j]=arr->a[i];
//     }
//     for(i=0;i<arr->length;i++){
//         arr->a[i]=b[i];
//     }
// }

// void reverse(struct array *arr){
    // int i,j;
    // int *b=new int [arr->size];
    // for(i=0,j=arr->length;i<j;i++,j--){
//         int temp;
//         temp=arr->a[i];
//         arr->a[i]=arr->a[j];
//         arr->a[j]=temp;
//     }
// }

void reverse (struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(arr->a[i],arr->a[j]);
    }
}

void instShorted(struct array *arr,int x){
 
    int i=arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while(i>=0 && arr->a[i]>x){
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}

int isSorted(struct array arr ){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.a[i]>arr.a[i+1])
            return 0;
    }return 1;
}

void reArange(struct array *arr){
int i=0;
int j=arr->length-1;
 while(i<j){
     while(arr->a[i]<0){
         i++;
     }while(arr->a[j]>=0){
         j--;
     }
     if(i<j){
         swap(arr->a[i],arr->a[j]);
     }
 }
}
    



int main()
{
    struct array arr={{2,-3,8,9,-33,15,18},10,7};
    // cout<<get(arr,1)<<endl;
    // cout<<set(arr,5,5)<<endl;
    // cout<<max(arr)<<endl;
    // cout<<min(arr)<<endl;
    // cout<<sum(arr)<<endl;
    // cout<<avg(arr)<<endl;
    //  reverse(&arr);
    //   instShorted(&arr,12);
    // cout<<isSorted(arr)<<endl;
    reArange(&arr);
   
    
   display(arr);
    

    return 0;
}
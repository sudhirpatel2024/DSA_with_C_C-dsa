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

void findDuplicate(struct array arr){
    int lastDupliate=0;
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]==arr.a[i+1] && arr.a[i]!=lastDupliate){
            cout<<arr.a[i]<<" ";
            lastDupliate=arr.a[i];
        }
    }
}


void findDuplicateAndCount(struct array arr){
    int lastDupliate=0;
    int j=0;
    for(int i=0;i<arr.length-1;i++){
        if(arr.a[i]==arr.a[i+1] && arr.a[i]!=lastDupliate )
          j=i+1;
          while(arr.a[j]==arr.a[i])
              j++;
              if(j-i>1){
              cout<<arr.a[i]<<" "<<j-i<<endl;
              lastDupliate=arr.a[i];
           i=j-1;
        }
    }
}


void findDuplicateUnsorted(struct array arr){
    for(int i=0;i<arr.length-1;i++){
        int count=1;
        if(arr.a[i]!=-1){
            for(int j=i+1;j<arr.length;j++){
                if(arr.a[i]==arr.a[j]){
                    count++;
                    arr.a[j]=-1;
                }
            }
            if(count>1){
                    cout<<arr.a[i]<<" " <<count<<endl;
            }
        }
    }
}


//in unsorted array
void findPairOfElmntwithSumK(struct array arr,int k){
    for(int i=0;i<arr.length-1;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr.a[i]+arr.a[j]==k){
                cout<<arr.a[i]<<" "<<arr.a[j]<<" "<<k<<endl;
            }
        }
    }
}

//sorted array

void findPairOfElmntwithSumK1(struct array arr,int k){
    int i,j;
    i=0;
    j=arr.length-1;
    
    // while(i<j){
    
       for(i=0,j=arr.length-1;i<j;){
        if(arr.a[i]+arr.a[j]==k){
            cout<<arr.a[i]<<" "<<arr.a[j]<<" "<<k<<endl;
            i++;
            j--;
        }else if(arr.a[i]+arr.a[j]>k){
            j--;
        }else{
            i++;
        }
    }
}


void findMaxMinInSingleScan(struct array arr){
    int max=arr.a[0];
    int min=arr.a[0];
    
    for(int i=1;i<arr.length;i++){
        if(arr.a[i]>max){
            max=arr.a[i];
           
        }else if(arr.a[i]<min){
            min=arr.a[i];
       
        }
    }
    cout<<max<<" "<<min;
}






int main(){
    
    
    // struct array arr={{3,4,4,5,6,8,8,8,10,10},10,10};
    // findDuplicate(arr);
    
    
    // findDuplicateAndCount(arr);
    
    // struct array arr={{3,5,2,5,8,3,2,4,3,2},10,10};
    // findDuplicateUnsorted(arr);
    
    // struct array arr={{1,2,3,5,6,7,8,9,10,11},10,10};
    // findPairOfElmntwithSumK1(arr,10);
    
    
    struct array arr={{454,3,341,6,5,9,5,61},10,8};
    findMaxMinInSingleScan(arr);
    
   
    // display(arr);

  return 0;   
}

   

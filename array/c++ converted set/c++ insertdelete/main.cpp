/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class array{
private:
        int *a;
        int size;
        int length;
public:

       array(){
           int size=10;
            a=new int [10];
           int length=0;
       }
       
       array(int sz){
           int size=sz;
           length=0;
           a=new int[size];
       }
       
       ~array(){
           delete []a;
       }
       
       void display();
       void insert(int index, int x);
       int Delete(int index);
};

void array::display(){
    for(int i=0;i<length;i++){
        cout<<a[i]<<" ";
        cout<<endl;
    }
}

void array::insert(int index,int x){
    if(index>=0 && index<=length){
        for(int i=length;i>index;i--)
            a[i]=a[i-1];
            a[index]=x;
            length++;
        
    }
}

int  array::Delete(int index){
    int y=0;
    if(index>=0 && index<=length){
        y=a[index];
        for(int i=0;i<length;i++)
            a[i]=a[i+1];
            length--;
        return y;
    }
    return 0;
}
int main()
{
    array arr(10);
    arr.insert(0,1);
    arr.insert(1,2);
    arr.insert(2,4);
    arr.insert(3,5);
    arr.insert(4,61);
    
    arr.display();
    cout<<endl;
    
    cout<<arr.Delete(3)<<endl;
    arr.display();
   

    return 0;
}

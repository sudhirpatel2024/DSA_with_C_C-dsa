/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class queue{
   private:
           int size;
           int front;
           int rear;
           int *Q;
   public:
          queue(int size);
          ~queue();
          bool isFull();
          bool isEmpty();
          void enqueue(int x);
          int dequeue();
          void display();
};

queue::queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new int [size];
}
 
queue::~queue() {
    delete [] Q;
}

void queue:: enqueue(int x){
    if(rear==size-1){
        cout<<"queue is full";
    }else{
        rear++;
        Q[rear]=x;
    }
}

int  queue::dequeue(){
    int x=-1;
    if(front==rear){
      cout<<"queue is empty"; 
    }else{
        front++;
        x=Q[front];
    }return x;
}

void queue:: display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<",";
    }
}

bool queue :: isFull(){
    if(rear==size-1){
        return true;
    }else{
        return false;
    }
}

bool queue ::  isEmpty(){
    if(front==rear){
        return true;
    }else{
        return false;
    }
}

int main()
{
   
 
    queue q(5);
 
    
    
    
    
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.enqueue(11);
    
     q.display();
     cout<<endl;
    
 q.dequeue();
    
    
   q.display();
    cout<<endl;
    
    cout<<q.isEmpty()<<endl;

    cout<<q.isFull();
   

    return 0;
}

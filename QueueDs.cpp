//queue implementation in c++

#include<iostream>
#define size 5

using namespace std;

class Queue {
    private:
    int items[size], front , rear;

    public:
    Queue(){
        
    front=-1;
    rear=-1;
    }

bool isFull(){
    if(front==0 & rear==size-1){
        return true;
    }
    else 
        return false;
}

bool isEmpty(){
    if(front==-1){
        return true;
    }
    else
        return false;
}

void enQueue(int element){
    if(isFull()){
        cout<<"stack overFlow:";
    }
    else {
        if(front==-1) front=0;
        rear++;
        items[rear]=element;
        cout<<endl<<"inserted"<<element<<endl;

    }

}

int deQueue(){
    int element;
    if(isEmpty()){
        cout<<"stack is Empty:"<<endl;
        return (-1); 
    }
    else{
        element=items[front];
        if (front>=rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        cout<<"element deleted: "<<element<<endl;
        return(element); 

    }
}

    void display(){
        int i;
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }
        else {
            cout<<"front index"<<front;
            cout<<endl;
            cout<<"items->";
            for(i=front;i<=rear;i++)
            cout<<items[i]<<"";
            cout<<"rear index->"<<rear<<endl;
        }

    }
}; 

int main() {
  Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();

  //deQueue removes element entered first i.e. 1
  q.deQueue();

  //Now we have just 4 elements
  q.display();

  return 0;
}




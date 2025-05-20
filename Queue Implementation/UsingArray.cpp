#include<iostream>
using namespace std;

class Queue{
    int size;
    int front, rear;
    int *arr;

    public:
    Queue(){
        front = -1;
        rear = -1;
        size = 1000;
        arr = new int[size];
    }

    bool isFull() {
        return rear == size - 1;
    }

    void enqueue(int n){
        if(isFull()){
            cout<<"Puri bhari hui hai, pehle khali karo."<<endl;
            return;
        }
        if(isEmpty()){
            front = 0;
        }
        arr[++rear] = n;
        cout<<"Enqueue Element :- "<<n<<endl;
    }

    bool isEmpty(){
        return front == -1;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Pehle se hi khali hai aur kya khali karoge."<<endl;
            return;
        }
        cout<<"Dequeued Element :- "<<arr[front]<<endl;
        front++;
        if (front > rear) {
            front = rear = -1; 
        }
    } 

    void frontElement(){
        cout<<"Front Element in Queue :- "<<arr[front]<<endl;
    }

    void AllElement(){
        cout<<"All Elements are :- ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout<<endl;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.AllElement();
    q.dequeue();
    q.frontElement();
    q.isEmpty();
    q.isFull();
    q.AllElement();
    q.dequeue();
    q.dequeue();
    bool x = q.isEmpty();
    if(x == 0){
        cout<<"Empty nhi hai"<<endl;
    }else{
        cout<<"Empty hai"<<endl;
    }
}
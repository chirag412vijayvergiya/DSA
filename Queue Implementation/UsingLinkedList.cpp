#include<iostream>
using namespace std;

struct QueueNode{
    int data;
    QueueNode *next;

    QueueNode(int data){
        this -> data = data;
        next = NULL;
    }
};

class Queue{
    QueueNode* front;
    QueueNode* rear;

    public:
    Queue(){
        front = rear = NULL;
    }

    bool isEmpty(){
        return front == NULL;
    }

    void enqueue(int data){
        QueueNode* newNode = new QueueNode(data);
        if(isEmpty()){
            front = rear = newNode;
            return;
        }
        rear -> next = newNode;
        rear = newNode;
        printQueue();
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Pehle se hi khali hai aur kya khali karoge"<<endl;
            return;
        }

        QueueNode* temp = front;
        front = front -> next;
        if (front == NULL) rear = NULL;
        cout<<"Dequeud element :- "<<temp -> data<<endl;
        delete temp;
    }

    void printQueue(){
        QueueNode* temp = front;
        while(temp != NULL){
            cout<< temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.printQueue();
    q.dequeue();
    bool x = q.isEmpty();
    if(x == 0){
        cout<<"Empty nhi hai"<<endl;
    }else{
        cout<<"Empty hai"<<endl;
    }
    q.printQueue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    bool y = q.isEmpty();
    if(y == 0){
        cout<<"Empty nhi hai"<<endl;
    }else{
        cout<<"Empty hai"<<endl;
    }

    return 0;
}
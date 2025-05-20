#include<iostream>
using namespace std;

class Stack{
    int size;
    int *arr;
    int top;

    public:
    Stack() {
        top = -1;
        size = 1000;
        arr = new int[size];
    }

    void push(int x){
        arr[++top] = x; 
    }

    int pop(){
        int x = arr[top];
        top--;
        return x;
    }

    int Top(){
        return arr[top];
    }

    int Size(){
        return top + 1;
    }

    void print(){
        while(top != -1){
            cout<<arr[top]<<" ";
            top--;
        }
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(15);
    s.push(39);

    cout<<"Top Element :- "<<s.Top()<<endl;
    cout<<"pop top element :- "<<s.pop()<<endl;
    cout<<"Print Elements of Stack :- ";
    s.print();
    cout<<endl;
    return 0;
}
#include<iostream>
using namespace std;

// Node ka structure
struct StackNode{
    int data;
    StackNode *next;
    int size;

    StackNode(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
    StackNode* top;

    public:
    Stack(){
        top = NULL;
    }

    void push(int x){
        StackNode* newNode = new StackNode(x);
        newNode -> next = top;
        top = newNode;
        cout<<"New Node pushed :- "<<x<<endl;
    }
    
    bool isEmpty() {
        return top == NULL;
    }

    void pop(){
        if (isEmpty()) {
            cout << "Stack underflow!\n";
            return;
        }

        StackNode* temp = top;
        top = top -> next;
        cout<<"Popped Element :- "<<temp -> data<<endl;
        delete temp;
    }

    void TopElement(){
        if (isEmpty()) {
            cout << "Stack underflow!\n";
            return;
        }

        cout<<"Peek Element :- "<<top -> data<<endl;
    }

    void print(){
        StackNode* temp = top;
        while(temp != NULL){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
    }

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);

    s.TopElement();
    bool x = s.isEmpty();
    if(x == 0){
        cout<<"Empty nhi hai"<<endl;
    }else{
        cout<<"Empty hai"<<endl;
    }
    cout<<"Elements in Stack are :- ";
    s.print();
    cout<<endl;
    s.pop();
    cout<<"Elements in Stack are :- ";
    s.print();
    cout<<endl;
    s.pop();
    bool y = s.isEmpty();
    if(y == 0){
        cout<<"Empty nhi hai"<<endl;
    }else{
        cout<<"Empty hai"<<endl;
    }

return 0;
}
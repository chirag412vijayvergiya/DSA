#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int data, Node* next1){
        this->data = data;
        this->next = next1;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    vector<int>arr = {2, 3, 4};
    Node* x = new Node(arr[0]);
    x->next = new Node(arr[1]);
    cout<<x<<endl;
    cout<<x->data<<endl;
    cout<<x->next->data<<endl;
    return 0;
}
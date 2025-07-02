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

Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    Node* middleNode = findMiddle(head);

    cout << "The middle node value is:- " << middleNode->data << endl;
    return 0;
}
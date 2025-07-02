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

bool detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; 

    if (detectCycle(head)) {
        cout << "Loop detected" << endl;
    } else {
        cout << "No loop detected" << endl;
    }

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
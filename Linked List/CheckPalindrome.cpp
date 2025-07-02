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

Node* reverseLL(Node* head){
    if (head == NULL || head->next == NULL) {
        return head; 
    }

    Node* newHead = reverseLL(head->next);

    Node* front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isPalindrome(Node* head){
    if (head == NULL || head->next == NULL) {
        return true; 
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    Node* newHead = reverseLL(slow->next);

    Node* first = head; 
    Node* second = newHead;

    while(second != NULL){
        if(first -> data != second -> data){
            reverseLL(newHead);
            return false;
        }

        first = first -> next;
        second = second -> next;
    }

    // reverseLL(newHead);  
    slow->next = reverseLL(newHead);
    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next = new Node(2);

    cout << "Original LL: ";
    printLinkedList(head);

    if (isPalindrome(head)) {
        cout << "Palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    printLinkedList(head);

    return 0;
}
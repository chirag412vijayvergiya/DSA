#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* back;

    Node(int data, Node* next1, Node* back1){
        this->data = data;
        this->next = next1;
        this->back = back1;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};

Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* x = new Node(arr[i], NULL, prev);

        prev -> next = x;

        prev = x;
    }
    return head;
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertAtTail(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL) return newNode;

    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> back = temp;
    newNode -> next = NULL;

    return head;
}

Node* reversedll(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;

    Node* curr = head;

    while(curr != NULL){

        prev = curr -> back;

        curr -> back = curr -> next;

        curr -> next = prev;

        curr = curr -> back;

    }   

    return prev -> back;
}

int main(){
    vector<int>arr = {2, 3, 4};
    Node* head = convertArr2DLL(arr);

    cout << "Doubly Linked List Initially: " << endl;

    printLL(head);
    cout<<endl;
    head = insertAtTail(head, 100);
    printLL(head);
    cout<<endl;
    head = reversedll(head);
    printLL(head);
    cout<<endl;
    return 0;
}
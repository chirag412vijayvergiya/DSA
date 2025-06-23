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

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertTail(Node* head, int val){
    if(head == NULL) return new Node(val);

    Node* temp = head;
    Node* x = new Node(val);
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = x;
    return head;
}

Node* insertAfterX(Node* head, int val, int x){
    if(head == NULL) return new Node(val);

    Node* temp = head;
    while(temp -> next != NULL){
        if(x == temp -> data) break;
        temp = temp -> next; 
    }
    Node* NewNode = new Node(val);
    Node* z = temp -> next;
    temp -> next = NewNode;
    NewNode -> next = z;

    return head;
}

Node* DeleteNode(Node* head){
     if(head == NULL) return head;

     Node* temp = head;
     while(temp -> next -> next != NULL){
        temp = temp -> next;
     }

    Node* x = temp -> next;
    temp -> next = NULL;
    delete x;

    return head;
}

int main(){
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    head = insertTail(head, val);

    printLL(head);
    head = insertAfterX(head, val, 5);
    cout<<endl;
    printLL(head);
    head = DeleteNode(head);
    cout<<endl;
    printLL(head);
    cout<<endl;
    return 0;
}
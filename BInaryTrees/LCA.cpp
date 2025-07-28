#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* findLCA(Node* root, int n1, int n2){
    if(root == NULL) return NULL;

    if(root -> data == n1 || root -> data == n2){
        return root;
    }

    Node* leftN = findLCA(root -> left, n1, n2);
    Node* rightN = findLCA(root -> right, n1, n2);

    if(leftN && rightN) return root;

    return (leftN != NULL) ? leftN : rightN;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node* lca = findLCA(root, 3, 5);
    if (lca)
        cout << "LCA: " << lca->data << endl; 
    else
        cout << "Nodes not found";
}

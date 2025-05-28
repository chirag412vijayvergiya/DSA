#include<iostream>
#include<queue>
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

class Solution{
    public:

    bool isIdentical(Node* root1, Node* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL) ){
            return false;
        }

        return ((root1 -> data == root2 -> data) && isIdentical(root1 -> left, root2 -> left) && isIdentical(root1 -> right, root2 -> right));
    } 
};

int main(){
    // node1
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);

    // node2
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->right = new Node(4);


    Solution obj;
    // Nothing need to do only do PREORDER Traversal
    bool x =  obj.isIdentical(root1, root2);
    cout << (x ? "Identical" : "Not Identical") << endl;

    return 0;
}
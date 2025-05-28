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

    int getHeight(Node* root){
        if(root == NULL){
            return 0;
        }

        int leftHeight = getHeight(root -> left);

        int rightHeight = getHeight(root -> right);

        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(Node* root){
        if(root == NULL){
            return true;
        }

        int leftSubtreeHeight = getHeight(root -> left);
        int rightSubtreeHeight = getHeight(root -> right);

        if(abs(rightSubtreeHeight - leftSubtreeHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }

        return false;
    } 
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right = new Node(7);

    Solution obj;
    bool x =  obj.isBalanced(root);
    // For Checking balancedtree need to check the difference from left and right subtree which should be <= 1.
    cout << (x ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
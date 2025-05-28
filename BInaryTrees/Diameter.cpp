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

    int DiameterLength(Node* root, int& maxi){
        if(root == NULL){
            return 0;
        }

        int leftHeight = DiameterLength(root -> left, maxi);

        int rightHeight = DiameterLength(root -> right, maxi);

        // return 1 + max(leftHeight, rightHeight);
        maxi = max(maxi, leftHeight + rightHeight + 1);
        return 1 + max(leftHeight, rightHeight);
    }

    int diameter(Node* root) {
        int maxi = 0;
        DiameterLength(root, maxi);
        return maxi;
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
    int x =  obj.diameter(root);
    // Same as height but here we need to find (leftsubtree + rightSubtree) length + 1 for diameter.
    cout<<"Max Diameter of a Binary Tree :- "<<x<<endl;

    return 0;
}
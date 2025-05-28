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

    int MaxSumPathProcess(Node* root, int& maxi){
        if(root == NULL){
            return 0;
        }

        int leftSumMaxi = max(0, MaxSumPathProcess(root -> left, maxi));
        int rightSumMaxi = max(0, MaxSumPathProcess(root -> right, maxi));

        maxi = max(maxi, leftSumMaxi + rightSumMaxi + root -> data);

        return max(leftSumMaxi, rightSumMaxi) + root -> data;
    }

    int MaxSumPath(Node* root) {
        int maxi = INT_MIN;
        MaxSumPathProcess(root, maxi);
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
    root->left->right->right->right = new Node(7);

    Solution obj;
    int x =  obj.MaxSumPath(root);
    // Same as height but here we need to find (leftsubtree + rightSubtree) length + 1 for diameter.
    cout<<"Max Sum Path of a Binary Tree :- "<<x<<endl;

    return 0;
}
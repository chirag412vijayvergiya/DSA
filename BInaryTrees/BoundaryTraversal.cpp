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

    bool isLeaf(Node* root){
        return root -> left == NULL && root -> right == NULL;
    }

    void addLeftBoundary(Node* root, vector<int>&ans){
        Node* curr = root -> left;
        while(curr){
            if(!isLeaf(curr)){
                ans.push_back(curr -> data);
            }

            if(curr -> left) curr = curr -> left;
            else curr = curr -> right;
        }
    }

    void addRightBoundary(Node* root, vector<int>&ans){
        vector<int>temp;
        Node* curr = root -> right;
        while(curr){
            if(!isLeaf(curr)){
                temp.push_back(curr -> data);
            }

            if(curr -> right) curr = curr -> right;
            else curr = curr -> left;
        }

        for(int i = temp.size() - 1; i >= 0; i--){
            ans.push_back(temp[i]);
        }
    }

    void addBottomBoundary(Node* root, vector<int>&ans){
        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }

        if(root -> left) addBottomBoundary(root -> left, ans);
        if(root -> right) addBottomBoundary(root -> right, ans);
    }

    vector<int>printBoundary(Node* root){
        vector<int>ans;
        if(root == NULL){
            return ans;
        }

        if(!isLeaf(root)){
            ans.push_back(root -> data);
        }

        addLeftBoundary(root, ans);
        addBottomBoundary(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    vector<int> result = obj.printBoundary(root);
    
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}


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

    int maxDepthUsingDFS(Node* root){
        if(root == NULL){
            return 0;
        }

        int leftHeight = maxDepthUsingDFS(root -> left);

        int rightHeight = maxDepthUsingDFS(root -> right);

        return 1 + max(leftHeight, rightHeight);
    }

    int maxDepthUsingBFS(Node* root){
        if(root == NULL){
            return 0;
        }

        queue<Node*>q;
        q.push(root);

        int depth = 0;
        while(!q.empty()){
            // THis is telling how much nodes on current level
            int levelSize = q.size();

           for(int i = 0; i < levelSize; i++ ){
                Node* x = q.front();
                q.pop();

                if(x -> left) q.push(x -> left);
                if(x -> right) q.push(x -> right);
            }
            depth++;
        }

        return depth;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    int depth = obj.maxDepthUsingDFS(root);
    cout<<"Maximum height of the tree is :- "<<depth<<endl;

    int depth2 = obj.maxDepthUsingBFS(root);
    cout<<"Maximum height of the tree is :- "<<depth2<<endl;

    return 0;
}
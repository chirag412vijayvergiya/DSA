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

    vector<vector<int>>ZigzagTraversal(Node* root){
        vector<vector<int>>res;
        if(root == NULL){
            return res;
        }

        queue<Node*>q;
        q.push(root);

        bool lefttoright = true;
        while(!q.empty()){
            int size = q.size();

            vector<int>ans(size);
            for(int i = 0; i < size; i++){
                Node* frontNode = q.front();
                q.pop();

                int index = lefttoright ? i : size - i - 1;
                ans[index] = frontNode -> data;
                
                if(frontNode -> left) q.push(frontNode -> left);
                if(frontNode -> right) q.push(frontNode -> right);
            } 

            lefttoright = !lefttoright;
            res.push_back(ans);
        }
        return res;
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

    Solution sol;
    vector<vector<int>>ans = sol.ZigzagTraversal(root);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
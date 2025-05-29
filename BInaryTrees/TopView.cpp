#include<iostream>
#include<queue>
#include<map>
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

    vector<int>TopView(Node* root){
        vector<int>ans;
        if(root == NULL) return ans;

        queue<pair<Node*, int>>q;
        map<int, int>mp;

        q.push({root, 0});

        while(!q.empty()){

            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int Verticalline = it.second;

            if(mp.find(Verticalline) == mp.end()){
                mp[Verticalline] = node -> data;
            }

            if(node -> left != NULL){
                q.push({node -> left, Verticalline - 1});
            }

            if(node -> right != NULL){
                q.push({node -> right, Verticalline + 1});
            }
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(11);
    root->right->left = new Node(9);

    Solution sol;
    vector<int>topView = sol.TopView(root);

    for(int i = 0; i < topView.size(); i++){
        cout<<topView[i]<<" ";
    }
    cout<<endl;
    return 0;
}
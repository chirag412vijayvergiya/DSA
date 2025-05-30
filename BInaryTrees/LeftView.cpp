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

    vector<int>printLeftView(Node* root){
        vector<int>ans;
        if(root == NULL){
            return ans;
        }

        queue<Node*>q;
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();

            for(int i = 0; i < levelSize; i++){
                auto it = q.front();
                q.pop();

                if(i == 0) ans.push_back(it->data);

                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);
            }
        }

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
    root->left->right->right = new Node(7);

    Solution obj;
    vector<int> result = obj.printLeftView(root);
    
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}


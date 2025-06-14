#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int>bfsTraversal(int V, vector<int>adj[]){
        vector<int>ans;
        vector<int>vis(V, 0);

        queue<int>q;
        q.push(0);
        vis[0] = 1;

        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);

            for(auto i: adj[x]){
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[6];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;

    vector<int>ans = obj.bfsTraversal(5, adj);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
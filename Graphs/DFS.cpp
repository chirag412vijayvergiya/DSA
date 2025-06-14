#include<iostream>
#include<vector>
using namespace std;

class Solution{

    void dfs(int node, vector<int>adj[], vector<int>vis, vector<int>&ans){
        vis[node] = 1;
        ans.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it, adj, vis, ans);
            }
        }
    }

    public:
    vector<int>dfsTraversal(int V, vector<int>adj[]){
        vector<int>vis(V, 0);
        vector<int>ans;
        
        int start = 0;

        dfs(start, adj, vis, ans);

        return ans;
    }
};

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[6];

    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    Solution obj;

    vector<int>ans = obj.dfsTraversal(5, adj);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
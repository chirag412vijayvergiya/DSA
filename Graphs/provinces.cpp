#include<iostream>
#include<vector>
using namespace std;

class Solution{

    void dfs(int node, vector<int>&vis, vector<vector<int>>&adjL){
        vis[node] = 1;

        for(auto it: adjL[node]){
            if(!vis[it]){
                dfs(it, vis, adjL);
            }
        }
    }

    public:
    int numProvinces(vector<vector<int>> adj, int V){
        vector<vector<int>> adjL(V);

        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(adj[i][j] == 1 & i != j){
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                }
            }
        }

        vector<int>vis(V, 0);
        int count = 0;

        for(int i = 0; i < V; i++){
            if(!vis[i]){
                count++;

                dfs(i, vis, adjL);
            }
        }
        return count;
    }
};

int main(){
    vector<vector<int>> adj
    {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    Solution ob;
    cout << ob.numProvinces(adj,3) << endl;

    return 0;
}
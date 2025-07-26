#include<iostream>
#include<vector>
using namespace std;

class Solution{
    private:
    bool detect(int src, vector<int>adj[], vector<int>&vis, vector<int>&currVis){
        vis[src] = 1;
        currVis[src] = 1;

        for(auto a: adj[src]){
            if(!vis[a]){
                if(detect(a, adj, vis, currVis)){
                    return true;
                }
            }else if(currVis[a]){
                return true;
            }
        }
        currVis[src] = 0;
        return false;
    }

    public:
    bool DetectCycleDirected(int V, vector<int> adj[]){
        vector<int> vis(V, 0);
        vector<int>currVis(V, 0);
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(detect(i, adj, vis, currVis)) return true;
            }
        }
        return false;
    }

};

int main(){
    vector<int> adj[4] = {
        {},        // node 0
        {2},       // node 1 -> 2
        {3},       // node 2 -> 3
        {5}        // node 3 -> 1 (cycle: 1 -> 2 -> 3 -> 1)
    };

    Solution obj;
    bool ans = obj.DetectCycleDirected(4, adj);
    if(ans){
        cout<<"Yes Cycle"<<endl;
    }else{
        cout<<"No Cycle"<<endl;
    }
    return 0;
}
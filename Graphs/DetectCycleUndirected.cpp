#include<iostream>
#include<vector>
using namespace std;

class Solution{
    private:
    bool detect(int src, vector<int>adj[], vector<int>&vis){
        vis[src] = 1;

        queue<pair<int,int>>q;
        q.push({src, -1});

        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;

            q.pop();

            for(auto a: adj[node]){
                if(!vis[a]){
                    vis[a] = 1;
                    q.push({a, node});
                }

                else if(a != parent){
                    return true;
                }
            }
        }
        return false;
    }

    public:
    bool DetectCycleUn(int V, vector<int> adj[]){
        vector<int> vis(V, 0);
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(detect(i, adj, vis)) return true;
            }
        }
        return false;
    }

};

int main(){
    vector<int>adj[4] = {{}, {2}, {1, 3}, {2}};

    Solution obj;
    bool ans = obj.DetectCycleUn(4, adj);
    if(ans){
        cout<<"Yes Cycle"<<endl;
    }else{
        cout<<"No Cycle"<<endl;
    }
    return 0;
}
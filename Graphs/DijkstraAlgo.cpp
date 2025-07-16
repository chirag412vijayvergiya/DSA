#include<iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<vector<int>>> adjM(vector<vector<int>>&edges, int V){
    vector<vector<vector<int>>>adj(V);

    for(auto &edge: edges){
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    return adj;
}

vector<int>dijkstra(int V, vector<vector<int>>&edges, int src){
    vector<vector<vector<int>>>adj = adjM(edges, V);

    vector<int>distance(V, INT_MAX);

    distance[src] = 0;

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;

    pq.push({0, src});

    while(!pq.empty()){
        int u = pq.top()[1];
        pq.pop();

        for(auto i: adj[u]){

            int v = i[0];
            int weight = i[1];

            if(distance[v] > distance[u] + weight){
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }

        }
    }

    return distance;
}

int main(){
    int v = 5;
    int src = 0;

    // Edges List format is {u, v, weight}
    vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 8}, {1, 4, 6}, {2, 3, 2}, {3, 4, 10}};

    vector<int> result = dijkstra(v, edges, src);

    for (int dist : result)
        cout << dist << " ";
 
    cout<<endl;
    return 0;
}
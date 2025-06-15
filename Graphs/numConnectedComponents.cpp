#include<iostream>
using namespace std;

class Solution{
    public:
    int numConnectedComponents(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Dir :- up, right, down, left
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    ans++;
                    queue<pair<int, int>>q;
                    q.push({i, j});
                    vis[i][j] = 1;

                    while(!q.empty()){
                        auto [x, y] = q.front();
                        q.pop();

                        for(int k = 0; k < 4; k++){
                            int nx = x + dx[k];
                            int ny = y + dy[k];

                            if(nx >= 0 && nx <= n - 1 && ny >= 0 && ny <= m - 1 && vis[nx][ny] != 1 && grid[x][y] == 1){
                                q.push({nx, ny});
                                vis[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> grid = {
        {1, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 1}
    };

    Solution sol;
    cout << "Number of connected components: " << sol.numConnectedComponents(grid) << endl;
    return 0;
}
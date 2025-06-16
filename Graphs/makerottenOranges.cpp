#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> orangesRotting(vector<vector<int>> grid) {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    int m = grid.size();
    int n = grid[0].size();

    int count = 0;

    queue<pair<int, int>>q;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 2)
                q.push({i, j});
        }
    }

    while(!q.empty()){
        int size = q.size();
        bool newRotten = false;

        while(size--){
            auto [x, y]  = q.front(); 
            q.pop();

            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                // Correct bounds check
                if(nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == 1){
                    grid[nx][ny] = 2;
                    q.push({nx, ny});
                    newRotten = true;
                }
            }
        }

        if(newRotten) count++;
    }
    cout<<count<<endl;
    return grid;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> v{ {2,1,1}, {0,1,1}, {1,0,1} };

    vector<vector<int>> rottedMatrix = orangesRotting(v);

    cout << "After Rotting Oranges Matrix: " << endl;
    printMatrix(rottedMatrix);

    return 0;
}
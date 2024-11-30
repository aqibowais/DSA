class Solution {
public:
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
#define p pair<int, pair<int, int>>
    int minimumTime(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if (grid[0][1] > 1 && grid[1][0] > 1)
            return -1;

        vector<vector<bool>> visi(m, vector<bool>(n, false));
        vector<vector<int>> result(m, vector<int>(n, INT_MAX));
        priority_queue<p, vector<p>, greater<p>> pq;

        pq.push({0, {0, 0}});
        result[0][0] = 0;

        while (!pq.empty()) {
            int time = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();

            if (row == m - 1 && col == n - 1)
                return result[row][col];

            if (visi[row][col] == true)
                continue;

            visi[row][col] = true;

            for (auto& dir : directions) {
                int i = row + dir[0];
                int j = col + dir[1];

                if(i<0 || i>=m || j<0 || j>=n) continue;
                if (grid[i][j] <= time + 1) {
                    pq.push({time + 1, {i, j}});
                    result[i][j] = time + 1;
                } else if ((grid[i][j] - time) % 2 == 0) {
                    pq.push({grid[i][j] + 1, {i, j}});
                    result[i][j] = grid[i][j] + 1;
                } else {
                    pq.push({grid[i][j], {i, j}});
                    result[i][j] = grid[i][j];
                }
            }
        }
        return result[m-1][n-1];

    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int ds[4][2] = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}
        };
        int n = matrix.size();
        int m = matrix[0].size();
        int op = 0;
        int vis = 0;
        int x = 0, y = 0;
        while (vis < n * m) {
            
            res.push_back(matrix[x][y]);
            vis++;

            if (x + 1 == n || y + 1 == m || ((x - 1 == -1 || y - 1 == -1) && vis == 1)) {
                op = (op + 1) % 4;
            }

            x += ds[op][0];
            y += ds[op][1];
        }
        return res;
    }
};

int main()
{  
    return 0;
}
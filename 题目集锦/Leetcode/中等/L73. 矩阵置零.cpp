#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m), col(n);
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (!matrix[i][j]) 
                {
                    row[i] = col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (row[i] || col[j]) 
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
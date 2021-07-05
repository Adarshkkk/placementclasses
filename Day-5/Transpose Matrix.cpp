class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> b(matrix[0].size(),vector<int>(matrix.size(),0));
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
             b[j][i]=matrix[i][j];
            }
        }
        return b;
    }
};
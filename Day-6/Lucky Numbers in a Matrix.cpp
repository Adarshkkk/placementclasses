class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int sum=0,i,j,k,max,min,t;
        vector<int> a;
        for(i=0;i<matrix.size();i++)
        {max=-111111;
         min=111111;
          for(j=0;j<matrix[i].size();j++)
          {
            if(min>matrix[i][j])
            {
            t=j;
            min=matrix[i][j];
            }
          }
         for(k=0;k<matrix.size();k++)
         {
        if(max<matrix[k][t])
        {
         max=matrix[k][t];
        }
         }
         if(max==min)
         {a.push_back(max);
          return a;
         }
         
        }
        return a;
    }
};
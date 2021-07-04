class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0,max1=0,n=accounts.size(),i,j;
        for(i=0;i<n;i++)
        {max1=0;
            for(j=0;j<accounts[i].size();j++)
            {
max1=max1+accounts[i][j];
                }
         if(max<max1)
         {max=max1;
        }
         
          }
        return max;
        
        
    }
};
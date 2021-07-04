class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> a;
        int i,j,l;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {a.push_back(grid[i][j]);
 }
        }
        int n=a.size();
        l=k;
        if(k>n)
        {l=n%k;
      }
        
        for(i=0;i<k;i++)
        {rotate(a.begin(),a.begin()+a.size()-1,a.end());}
        int m=0;
          for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {grid[i][j]=a[m];
             m++;
 }}
        return grid;
        
    }
};
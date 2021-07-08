class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> a=mat;
        int i,j,k=0;
     
        if(mat==target)
        {
            return true;
         }
  while(k<=4)
     {
        for(i=0;i<mat.size();i++)
          {
             for(j=0;j<mat[i].size();j++)
             {
                 a[j][mat[0].size()-1-i]=mat[i][j];
              }
          }
          if(a==target)
         {
          return true;
           }
        k++;
       mat=a; 
     }
        
    return false;    
    }
};
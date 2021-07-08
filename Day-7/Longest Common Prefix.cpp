class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string a="";
        int min=INT_MAX,i,j;
        for(i=0;i<strs.size();i++)
        {
         int l=strs[i].size();
            if(min>l)
            {min=l;
              }
        }
        for(i=0;i<min;i++)
        {
        for(j=0;j<strs.size()-1;j++)
        {
            if(strs[j][i]!=strs[j+1][i])
            {
                return a;
             }
         }
        a=a+strs[j][i];
        
        }
        return a;
        
    }
};
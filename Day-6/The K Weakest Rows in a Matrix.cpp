class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int> a;
        int i;
        vector<int> g;
        for(i=0;i<mat.size();i++)
        {int sum=0;
        sum= accumulate(mat[i].begin(),mat[i].end(),0);
        
         a.insert({sum,i});

         }
        int r=0;
        for(auto b:a)
        {
      int l=b.second;
        g.push_back(l);
            r++;
            if(r>=k)
            {break;
}
        }
     return g;   
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i,j,n=nums1.size(),m=nums2.size();
        vector<int> c;
        vector<int> l;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             if(nums1[i]==nums2[j])
             {
                 c.push_back(nums1[i]);
              }
            
            }
}     if(c.size()>0)
        {sort(c.begin(),c.end());
        l.push_back(c[0]);
        for(i=1;i<c.size();i++)
        {if(c[i]!=c[i-1])
        {l.push_back(c[i]);
  }
}}
        return l;
    }
};
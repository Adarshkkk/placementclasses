class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      map<int,int> a;
        int c=0;
        for(auto i:nums)
        {
            a[i]++;
     }
        for(auto i:a)
        {
     int f=i.second;
            if(f>1)
              {
                c=c+f*(f-1)/2;
 }
        }
        return c;
        
    }
};
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a;
        int i,j,c;
        for(i=0;i<nums.size();i++)
        {c=0;
       for(j=0;j<nums.size();j++)
       {
      if(i!=j)
      {
          if(nums[i]>nums[j])
          {c++;
       }
       }
           
       }
         a.push_back(c);
        }
        return a;
        
    }
};
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i,j,m=nums.size();
        vector<int> a;
        
        j=n;
        for(i=0;i<n;i++)
        {
         a.push_back(nums[i]);
         a.push_back(nums[j]);
        j++;
        }
        return a;
        
    }
};
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> a;
        int i;
        for(i=0;i<nums.size();i++)
        {
            a.insert(a.begin()+index[i],nums[i]);
       }
        return a;
        
    }
};
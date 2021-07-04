class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> a;
        int i,j;
        for(i=0;i<nums.size();i=i+2)
        {
            for(j=0;j<nums[i];j++)
            {
                a.push_back(nums[i+1]);
    }
}
        return a;
    }
};
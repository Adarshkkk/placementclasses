class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0,j=0,k,n=nums.size();
        while(j<n)
        {
         if(nums[j]==val)
         {
        j++;
         }
            else
            {
                k=nums[i];
                nums[i]=nums[j];
                nums[j]=k;
                i++;
                j++;
                    
          }
        
        }
        return i;
    }
};
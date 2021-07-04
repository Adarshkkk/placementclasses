class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0,j=1,k,n=nums.size();
        if(n==0)
        {
return 0;}
       while(j<n)
       {
      if(nums[i]==nums[j])
          
      { j++;
       
       }
        else{
i=i+1;
 k=nums[i];
 nums[i]=nums[j];
        nums[j]=k;
        j++;}}
    return i+1;
    
    }
    
};
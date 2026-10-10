class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int first=nums[0];
        int ans=0;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>first)
            {
                count=count+1;
                first=nums[i];
                ans=max(ans,count);
            }
            else
            {
                ans=max(ans,count);
                count=1;
                first=nums[i];
            }

        }
        if(ans>count)
        return ans;

        else
        return count;
        
    }
};
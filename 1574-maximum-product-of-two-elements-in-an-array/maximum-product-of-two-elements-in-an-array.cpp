class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxvalue=0;
        int maximum=nums[0];
        int smax=-1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=maximum)
            {
            smax=maximum;
            maximum=nums[i];
            }
            else if(nums[i]<maximum && nums[i]>smax){
                smax=nums[i];
            }
            
        }
        return ((maximum-1)*(smax-1));
        
    }
};
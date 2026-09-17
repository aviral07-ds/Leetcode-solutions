class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1,end=0,mid,n=nums.size();
        int divisor=0;
        for(int j=0;j<n;j++)
        {
            end=max(end,nums[j]);
        }
        while(start<=end)
        {    
            mid=start+(end-start)/2;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=(nums[i]+mid-1)/mid;
            
            }
            if(sum<=threshold)
            {
                divisor=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return divisor;
    }
};
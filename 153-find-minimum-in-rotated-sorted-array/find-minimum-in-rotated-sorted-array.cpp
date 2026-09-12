class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int ans=nums[0],mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[0]<=nums[mid])   // left side sorted
            start=mid+1;
            else  // right side sorted
            {
            ans=nums[mid];
            end=mid-1;
            }


        }
        return ans;
    }
};
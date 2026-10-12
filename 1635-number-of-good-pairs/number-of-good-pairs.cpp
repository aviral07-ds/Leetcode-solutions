class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>count(100,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]-1]++;
        }
        int ans=0;
        for(int i=0;i<100;i++){
            if(count[i]!=0){
                int n=count[i];
                ans+= n*(n-1)/2; 
            }
        }
        return ans;
    }
};
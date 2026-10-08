class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
          int value=nums[i];
          int digit=0;
           
           while(value!=0)
           {
            value=value/10;
            digit=digit+1;
           }
           if(digit%2==0)
           {
            ans=ans+1;
           }
           

        }
        return ans;
    }
};
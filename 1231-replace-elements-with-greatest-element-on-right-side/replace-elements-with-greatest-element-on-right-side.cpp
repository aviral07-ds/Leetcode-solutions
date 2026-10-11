class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        vector<int>ans(arr.size(),-1);
        int max=arr[arr.size()-1];

        for(int i=arr.size()-2;i>-1;i--)
        {
            if(arr[i]<max)
            {
                ans[i]=max;
            }
            else
            { 
              ans[i]=max;
              max=arr[i];
            }
        }
        return ans;



        
    }
};
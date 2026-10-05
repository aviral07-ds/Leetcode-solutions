class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;
        int n=address.size();
        string ans;

        while(index<n)
        {
            if(address[index]=='.')
            ans=ans+"[.]";

            else
            ans=ans+address[index];
            index++;

        }
        return ans;
        
    }
};
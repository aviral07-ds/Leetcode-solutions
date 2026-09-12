class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        int mid;
        int index=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                index=mid;
                break;
            }
            else if(arr[mid]>arr[mid-1])
            start=mid+1;

            else
            end=mid;
        }

        return index;
    }
};
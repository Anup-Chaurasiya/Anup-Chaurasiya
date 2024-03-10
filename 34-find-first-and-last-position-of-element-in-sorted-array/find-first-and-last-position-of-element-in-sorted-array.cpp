class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        int mid,start=0,end=size-1;
        int first=-1,last=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first = mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        
        start=0,end=size-1;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                  last = mid;
                  start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        vector<int>arr(2);
        arr[0]=first;
        arr[1]=last;

        return arr;
    }
};
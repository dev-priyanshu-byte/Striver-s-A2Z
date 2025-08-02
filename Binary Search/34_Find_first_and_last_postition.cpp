class Solution {
public:
    int find(vector<int>nums,int target){
        int low=0,mid=0,high=nums.size()-1;
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]<target)
            low=mid+1;
            else
            high=mid;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
        return {-1,-1};
        int a=find(nums,target);
        if(nums[a]!=target)return {-1,-1};
        int b=find(nums,target+1);
        if(nums[b]!=target)b--;
        return {a,b};
    }
};
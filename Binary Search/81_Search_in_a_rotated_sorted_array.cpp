class Solution {
public:
    bool find(vector<int>&nums,int low,int high,int target){
        if(low==high)
        {
            if(nums[low]==target)return true;
            else return false;
        }
        int mid=(low+high)/2;
    
        if(nums[low]<nums[high]){
            if(nums[mid]<target)
            return find(nums,mid+1,high,target);
            else
            return find(nums,low,mid,target);
        }
        else if(nums[low]>nums[high])
        {
            if(nums[mid]>=nums[low])
            {
                if(nums[mid]<target)
                return find(nums,mid+1,high,target);
                else
                {
                    if(nums[high]>=target)
                    return find(nums,mid+1,high,target);
                    else
                    return find(nums,low,mid,target);

                }
            }
            else
            {
                if(nums[high]<target)
                return find(nums,low,mid,target);
                else
                {
                if(nums[mid]<target)
                return find(nums,mid+1,high,target);
                else
                return find(nums,low,mid,target);
                }
            }
        }
        else
        {
            return find(nums,low,mid,target)|find(nums,mid+1,high,target);
        }
    }
    bool search(vector<int>& nums, int target) {
        return find(nums,0,nums.size()-1,target);
    }   
};
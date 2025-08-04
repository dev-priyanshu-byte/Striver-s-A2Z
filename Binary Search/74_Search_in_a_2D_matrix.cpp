class Solution {
public:
    int searchRow(vector<vector<int>>&matrix, int target){
        int mid=0,low=0,high=matrix.size()-1;
        while(low<high){
            mid=ceil((1.0*low+high)/2);
            if(matrix[mid][0]>target)
            high=mid-1;
            else
            low=mid;
        }
        return low;
    }
    int search(vector<int>&nums,int target){
        int mid=0,low=0,high=nums.size()-1;
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]<target)
            low=mid+1;
            else
            high=mid;
        }
        return low;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int x=searchRow(matrix,target);
    int y=search(matrix[x],target);
    if(matrix[x][y]==target)
    return true;
    else
    return false;

    }
};
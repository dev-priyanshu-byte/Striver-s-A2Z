class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x=0,y=matrix[0].size()-1;
        while(x<matrix.size()&&y<matrix[0].size())
        {
            if(matrix[x][y]==target) return true;
            while(x<matrix.size()&&matrix[x][y]<target) x++;
            while(x<matrix.size()&&y>=0&&matrix[x][y]>target) y--;
        }
        return false;
    }
};
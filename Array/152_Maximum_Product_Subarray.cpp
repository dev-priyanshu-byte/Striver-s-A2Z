class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int best=nums[0];
        long ni=-1,np=1;
        int i=0;
        long prod=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                best=max(best,0);
                ni=-1;
                np=1;
                prod=1;
                int j=i;
                while(j<nums.size()&&nums[j]==0)
                j++;
                i=j-1;
                continue;
            }
            prod=prod*nums[i];
            if(nums[i]<0&&ni==-1)
            {
                ni=i;
                np=prod;
            }
            if(prod<0&&ni!=i)
            {
                int c=prod/np;
                best=max(best,c);
            }
            else
            {

                best=max(best,(int)prod);
            }
            
        }
        return best;
    }
};

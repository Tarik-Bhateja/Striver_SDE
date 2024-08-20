class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        {
            return nums[0];
        }

        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxi=max(sum,maxi);

            if(sum<0)
            {
                sum=max(0,sum);
            }
        }

        return maxi;
    }
};
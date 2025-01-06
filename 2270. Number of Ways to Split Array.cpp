class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        long long sum=0;

        for(int ele : nums){
            sum+=ele;
        }
        long long prefix_sum=0;

        for(int i=0;i<n-1;++i){
            prefix_sum+=nums[i];
            if(prefix_sum>=sum-prefix_sum)
            count++;    
        }
        return count;
    }
};
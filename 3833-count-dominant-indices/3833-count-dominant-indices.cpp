class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int sum=0,c=0;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            sum+=nums[i+1];
            if(nums[i]>(sum/(n-1-i))){
                c++;
            }
        }
        return c;
        
    }
};
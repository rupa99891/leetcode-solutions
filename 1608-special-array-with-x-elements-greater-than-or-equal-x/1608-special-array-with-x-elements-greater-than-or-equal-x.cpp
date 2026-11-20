
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        for (int x=1;x<=n;x++) {
            int c=0;
            for (int i=0;i<n;i++) {
                if(nums[i]>=x) {
                    c++;
                }
            }
            if(c==x){
                return x;
            }
        }
        return -1;
    }
};

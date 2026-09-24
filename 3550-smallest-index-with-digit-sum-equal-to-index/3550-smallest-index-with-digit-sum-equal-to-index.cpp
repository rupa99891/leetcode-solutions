class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            int s=0;
            while(k>0){
                int r=k%10;
                s+=r;
                k/=10;
            }
            if(s==i){
                return i;
            }
        }
        return -1;
        
    }
};
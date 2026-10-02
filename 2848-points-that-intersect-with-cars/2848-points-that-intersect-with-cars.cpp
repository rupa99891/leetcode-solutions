class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        int i,j;
        int freq[101]={0};
        for(i=0;i<n;i++){
            for(j=nums[i][0];j<=nums[i][1];j++){
                freq[j]++;
            }
        }
        int c=0;
        for(i=1;i<=100;i++){
            if(freq[i]>0)c++;
        }
        return c;
        
        
    }
};
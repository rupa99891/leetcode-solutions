class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int>mp;
        for(int i:nums1){
            for(int j:nums2){
                mp[i+j]++;
            }
        }
        int c=0;
        for(int i:nums3){
            for(int j:nums4){
                if(mp[-(i+j)]){
                    c=c+mp[-(i+j)];
                }
            }
        }
        return c;
        
    }
};
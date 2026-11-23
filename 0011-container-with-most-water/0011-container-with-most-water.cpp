class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,ans=0;
        int r=height.size()-1;
        while(l<r){
            int a=min(height[l],height[r])*(r-l);
            ans=max(ans,a);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return ans;
    }
};
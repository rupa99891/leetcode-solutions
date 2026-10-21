class Solution {
public:
    int mirrorDistance(int n) {
        string rev=to_string(n);
        int s=0;
        int m=rev.size()-1;
        while(s<m){
            swap(rev[s],rev[m]);
            s++;
            m--;
        }
        int ans=stoi(rev);
        return abs(n-ans);
        
    }
};
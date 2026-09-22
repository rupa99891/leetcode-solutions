class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>arr;
        unordered_map<int,int>freq;
        while(n>0){
            int r=n%10;
            arr.push_back(r);
            n/=10;
        }
        for(int i:arr){
            freq[i]++;
        }
        int sum=0;
        for(auto &p:freq){
            sum+=p.first*p.second;
        }
        return sum;
        
    }
};
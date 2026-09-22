class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
          int c=(int)s[i];
          int p=('z'-c+1)*(i+1);
          sum+=p;
        }
        return sum;
        
    }
};
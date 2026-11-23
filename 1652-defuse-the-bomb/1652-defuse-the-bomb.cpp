
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if(k==0) return ans;
        int start,end;
        if (k>0) {
            start=1;
            end=k;
        } else {
            start=n+k;
            end=n-1;
        }
        int sum=0;
        for (int i=start;i<=end;i++) {
            sum+=code[i%n];
        }
        for (int i = 0; i < n; i++) {
            ans[i]=sum;

            sum-=code[start % n];
            start++;
            end++;

            sum+=code[end % n];
        }

        return ans;
    }
};

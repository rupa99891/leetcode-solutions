class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int x=source[0];
        int y=source[1];
        int a=target[0];
        int b=target[1];
        if(x==a && y==b)return 0;
        if(x==a || y==b || abs(x-a)==abs(y-b))return 1;
        return 2;
        
    }
};
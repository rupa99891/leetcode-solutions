class RecentCounter {
public:
    queue<int>que;
    RecentCounter() {
        
    }
    
    int ping(int t) {

        while(!que.empty() && que.front()<(t-3000)){
            que.pop();
        }
        que.push(t);
        return que.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
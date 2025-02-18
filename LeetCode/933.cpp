class RecentCounter {
    public:
        queue<int> q;
        int cur=0;
    
        RecentCounter() {
    
        }
        
        int ping(int t) {
            cur = t;
            q.push(t);
            while(cur - 3000 > q.front())q.pop();
            return q.size();
        }
    };
    
    /**
     * Your RecentCounter object will be instantiated and called as such:
     * RecentCounter* obj = new RecentCounter();
     * int param_1 = obj->ping(t);
     */
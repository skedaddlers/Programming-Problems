class Solution {
    public:
        int minCostClimbingStairs(vector<int>& cost) {
            int siz = cost.size();
            if(siz == 2){
                return min(cost[1], cost[0]);
            }
            else if(siz == 1){
                return cost[0];
            }
            for (int i=2; i<siz; i++){
                cost[i] = min(cost[i-1] + cost[i], cost[i-2] + cost[i]);
            }   
            return min(cost[siz - 1], cost[siz - 2]);
        }
    };
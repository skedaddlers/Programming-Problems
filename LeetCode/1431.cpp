class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int highestCandy = -1, highestIdx;
            int siz = candies.size();
            for(int i = 0; i < siz; i++){
                if(candies[i] > highestCandy) highestCandy = candies[i];
            }
    
            vector<bool> result(siz);
            for(int i = 0; i < siz; i++){
                if(candies[i] + extraCandies >= highestCandy) result[i] = true;
                else result[i] = false;
            }
    
            return result;
        }
    };
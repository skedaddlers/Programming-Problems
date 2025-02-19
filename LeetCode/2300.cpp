class Solution {
    public:
        vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
            int count, pSize = potions.size();
            vector<int> res;
            sort(potions.begin(), potions.end());
            for(int i = 0; i < spells.size(); i++){
                count = 0;
                int left = 0, right = pSize - 1;;
                int mid, idx=pSize;
                while(left <= right){
                    mid = left + (right - left) / 2;
                    long long a = spells[i], b = potions[mid];
                    if(a * b >= success) {
                        idx = mid;
                        right = mid - 1;
                    }
                    else{
                        left = mid + 1;
                    }
                }
                res.push_back(pSize - idx);
            }
    
            return res;
        }
    };
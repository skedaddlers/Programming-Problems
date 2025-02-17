class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int alt = 0, max=0;
            for(int i = 0; i < gain.size(); i++){
                alt = alt + gain[i];
                if(max < alt) max = alt;
            }
            return max;
        }
    };
class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int arrSize = nums.size();
            int lSum[arrSize+2], rSum[arrSize+2];
            lSum[0] = 0;
            rSum[0] = 0;
    
            for(int i = 1; i < arrSize+1; i++){
                lSum[i] = lSum[i-1] + nums[i-1];
                rSum[i] = rSum[i-1] + nums[arrSize-i];
            }
            for(int i = 0; i < arrSize; i++){
                if(lSum[i] == rSum[arrSize-i-1]) return i;    
            }
            return -1;
        }
    };
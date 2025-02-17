class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int idx=0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i]!=0){
                    int temp;
                    temp = nums[idx];
                    nums[idx] = nums[i];
                    nums[i] = temp;
                    idx++;
                }
            }
        }
    };
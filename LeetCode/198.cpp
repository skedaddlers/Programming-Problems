class Solution {
    public:
        int rob(vector<int>& nums) {
            int siz = nums.size();
            if(siz == 3) return max(nums[1], nums [0] + nums[2]);
            if(siz == 2) return max(nums[0], nums[1]);
            if(siz == 1) return nums[0];
            nums[2] = nums[2]+nums[0];
            for(int i = 3; i < siz; i++){
                nums[i] = max(nums[i-2] + nums[i], nums[i-3] + nums[i]);
            }
            return max(nums[siz-1],nums[siz-2]);
        }
    };
class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            double max = -9999999;
            double sum = 0;
            
            for(int i = 0; i < nums.size() ; i++) 
            {
                if(i+1 > k){
                    sum = sum - nums[i-k] + nums[i];
                    if(sum/k > max/k) max = sum;
    
                }
                else if(i==k-1){
                    sum += nums[i];
                    if(sum/k > max/k) max = sum;
                }
                else{
                    sum += nums[i];
                }
            }
    
            return max/k;
        }
    };
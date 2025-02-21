class Solution {
    public:
        int compress(vector<char>& chars) {
            int n = chars.size();
            if(n == 0) return 0;
            int count = 1;
            int idx = 0;
            for(int i = 0; i < n; i++){
                if(i + 1 == n || chars[i] != chars[i+1]){
                    chars[idx++] = chars[i];
                    if(count > 1){
                        string numArr = to_string(count);
                        for(char c : numArr){
                            chars[idx++] = c;
                        }
                    }
                    count = 1;
                }
                else count++;
            }
            return idx;
        }
    };
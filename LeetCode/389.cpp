class Solution {
    public:
        char findTheDifference(string s, string t) {
            int sum = 0, sumt = 0;
            for(int i = 0; i < s.size(); i++){
                sum = sum + s[i];
                sumt += t[i];
            }
            sumt += t[t.size() - 1];
            sum = sumt - sum;
            return (char)sum;
        }
    };
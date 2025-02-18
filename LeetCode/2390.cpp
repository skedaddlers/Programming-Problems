class Solution {
    public:
        string removeStars(string s) {
            string res="";
            for(int i = 0; i < s.size(); i++){
                if(s[i] != '*') res += s[i];
                else res.erase(res.size()-1);
            }
            return res;
        }
    };
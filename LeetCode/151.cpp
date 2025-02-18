class Solution {
    public:
        string reverseWords(string s) {
            deque<string> str;
            string res="";
            int i=0, n=s.size();
            while(i < n){
                while(i < n && s[i] == ' ') i++;
    
                string word="";
    
                while(i < n && s[i] != ' '){
                    word += s[i];
                    i++;
                }
                if(word != "") str.push_front(word);
            }
            while(!str.empty()){
                res = res + str.front();
                str.pop_front();
                if(!str.empty()) res += ' ';
            }
            return res;
        }
    
    };
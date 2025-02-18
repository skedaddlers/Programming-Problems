class Solution {
    public:
        bool isVowel(char x){
            return (x == 'a' ||
                x == 'i' ||
                x == 'u' ||
                x == 'e' ||
                x == 'o'
            );
        }
        int maxVowels(string s, int k) {
            int count=0, max=0;
            for(int i=0; i<s.size(); i++){
                if(i+1 > k){
                    if(isVowel(s[i-k])){
                        count--;
                    }
                    if(isVowel(s[i])){
                        count++;
                    }
                    if(max < count)max = count;
                }
                else if(i == k-1){
                    if(isVowel(s[i])) count++;
                    if (max < count) max = count;
                }
                else{
                    if(isVowel(s[i])) count++;
                }
            }
            return max;
        }
    };
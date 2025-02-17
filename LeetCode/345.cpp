class Solution {
    public:
        bool isVowel(char a){
            if (a=='a' ||
                a=='i' ||
                a=='u' ||
                a=='e' ||
                a=='o' ||
                a=='A' ||
                a=='I' ||
                a=='U' ||
                a=='E' ||
                a=='O'
            ) return true;
            return false;
        }
    
        string reverseVowels(string s) {
            int curIdx = s.size()-1, count = 0, swapCount = 0;
            for(int i = 0; i < s.size(); i++){
                if(isVowel(s[i]))count++;
            }
            for(int i = 0; i < s.size(); i++){
                if(isVowel(s[i]) && swapCount < count/2){
                    for(int j = curIdx; j >= 0; j--){
                        if(isVowel(s[j])){
                            swapCount++;
                            char temp = s[i];
                            s[i] = s[j];
                            s[j] = temp;
                            curIdx = j-1;
                            break;
                        }
                    }
                }
            }
    
            return s;
        }
    };
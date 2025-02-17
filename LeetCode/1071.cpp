#include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int s1len = str1.size();
        int s2len = str2.size();
        string divs1[1002], divs2[1002], res;
        bool isDivisor = false;
        for(int i = 0; i < s1len; i++){
            int subSize = i+1;
            isDivisor = true;
            string sub = str1.substr(0, subSize);
            for(int j = 0; j < s1len; j += subSize){
                if(sub != str1.substr(j, subSize)) {
                    isDivisor = false;
                    break;
                }
            }
            if(isDivisor) divs1[i] = sub;
            cout << divs1[i] << endl;

        }

        for(int i = 0; i < s2len; i++){
            int subSize = i+1;
            isDivisor = true;
            string sub = str2.substr(0, subSize);
            for(int j = 0; j < s2len; j += subSize){
                if(sub != str2.substr(j, subSize)) {
                    isDivisor = false;
                    break;
                }
            }
            if(isDivisor) divs2[i] = sub;
            cout << "woi" << divs2[i] << endl;

        }

        for(int i = 1001; i >= 0; i--){
            // cout << i << divs1[i] << " " << divs2[i] << endl;
            if(divs1[i] == divs2[i] && divs1[i] != "") {
                res = divs1[i];
                break;
            }
        }

        cout << res << endl;
        return 0;

}
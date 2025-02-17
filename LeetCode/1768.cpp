#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    int min, max;
    string wordEx, res = "";
    if(n < m){
        min = n;
        max = m;
        wordEx = s2;
    } else {
        min = m;
        max = n;
        wordEx = s1;
    }

    for(int i = 0; i < min; i++){
        res += s1[i];
        res += s2[i];
    }

    for(int i = min; i < max; i++){
        res += wordEx[i];
    }

    cout << res << endl;


}
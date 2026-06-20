#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    string result = "codeforces";
    while(t--){
        string s; cin >> s;
        int d = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] != result[i]) d++;
        }
        cout << d << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool special = false;
        for (int i = 0; i < n; i++){
            if (!((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))){
                special = true;
                break;
            }
        }
        if (!special){
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            if (s == tmp) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else cout << "NO" << endl;
    }
    return 0;
}


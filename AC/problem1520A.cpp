#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        set<char> se;
        se.insert(s[0]);
        bool flag = true;
        for (int i = 1; i < n; i++){
            if (s[i] != s[i-1]){
                if (se.find(s[i]) != se.end()){
                    flag = false;
                    break;
                }else{
                    se.insert(s[i]);
                }
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


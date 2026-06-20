#include <bits/stdc++.h>

using namespace std;
void solve(){
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 1; i < (int)(s.length()); i++) {
            if (s[i] != s[0]) {swap(s[i], s[0]); ok = true; break;}
        }
        if (!ok) {
            cout << "NO\n"; return ;
        }
        cout << "YES\n";
        cout << s << '\n';
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


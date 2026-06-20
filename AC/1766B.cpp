#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n <= 3){
        cout << "NO\n";
        return;
    }
    map<char,set<char>> m;
    m[s[0]].insert(s[1]);
    for(int i = 3; i < n; i++){
        if(m[s[i-1]].find(s[i]) != m[s[i-1]].end()){
            cout << "YES\n";
            return;
        }
        m[s[i-2]].insert(s[i-1]);
    }
    cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

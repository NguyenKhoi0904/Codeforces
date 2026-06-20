#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    string s; cin >> s;
    int n = s.size();
    int ab = 0, ba = 0;
    for(int i = 0; i < n-1 ; i++){
        if (s.substr(i, 2) == "ab") {
            ab++;
        }
        if (s.substr(i, 2) == "ba") {
            ba++;
        }
    }
    if (ab == ba){
        cout << s << endl;
        return;
    }
    s[n-1] = s[0];
    cout << s << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

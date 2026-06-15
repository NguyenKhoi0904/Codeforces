#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define int long long

using namespace std;

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '-') x++;
        else y++;
    }
    int ans = (x - x/2) * y * (x/2);
    cout << ans << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}

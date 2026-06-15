#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    int a, b, c; cin >> a >> b >> c;
    cout << max(a + b + c, max(a * b * c, max(a + b * c, max(a * b + c, max((a + b) * c, (a * (b + c))))))) << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


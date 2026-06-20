#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

const int maxn = 100;

void Solve(){
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    cout << ((x == 0) && (y == 0) && (z == 0) ? "YES" : "NO") << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
/*
3
0 2 -2
1 -1 3
-3 0 0
*/

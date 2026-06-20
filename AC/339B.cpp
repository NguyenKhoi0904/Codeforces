#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)
#define int long long

using namespace std;

void Solve(){
    int n, m; cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
    int h = 1;
    int r = 0;
    for(int i = 0; i < m; i++){
        if(h < a[i]){
            r = r + (a[i]-h);
        }else if (h > a[i]){
            r = r + (n-h) + a[i];
        }
        h = a[i];
    }
    cout << r << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


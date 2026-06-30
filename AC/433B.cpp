#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)
#define int long long

using namespace std;

const int maxn = 1e5;
int preffix_u[maxn+1];
int preffix_v[maxn+1];
int v[maxn+1];
int u[maxn+1];

void Solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int tmp; cin >> tmp;
        v[i] = tmp;
        preffix_v[i] = v[i] + preffix_v[i-1];
        u[i] = tmp;
    }
    sort(u + 1, u + n + 1);
    for(int i = 1; i <= n; i++){
        preffix_u[i] = u[i] + preffix_u[i-1];
    }
    int m; cin >> m;

    while(m--){
        int t, l, r; cin >> t >> l >> r;
        if(t == 1){
            cout << preffix_v[r] - preffix_v[l-1] << ln;
        }else{
            cout << preffix_u[r] - preffix_u[l-1] << ln;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

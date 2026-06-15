#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

const int maxv = 1e9;
const int maxn = 2e5+5;
const int inf = 1e9;


bool dfs(int weight, vector<vector<int>> adj, int node, int a[maxn]){
    if(weight > inf) return false;

    bool leaf = true;
    if(node != 1){
        weight += max(0, weight - a[node]);
    }

    for(int neighbor: adj[node]){
        leaf = false;
        if(!dfs(weight, adj, neighbor, a)) return false;
    }
    return (!leaf || weight <= a[node]);
}

void Solve(){
    int a[maxn], p[maxn];
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    FOR1(n) cin >> a[i];
    for(int i = 2; i <= n; i++){
        cin >> p[i];
        adj[p[i]].push_back(i);
    }

    int l = 1, r = maxv;
    while(l <= r){
        int mid = (l+r)/2;

        if(dfs(mid, adj, 1, a)){
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << l - 1 + a[1] << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
1
4
0 1 0 2
1 1 3
*/
/*
1
2
3 0
1
*/
/*
1
5
2 5 3 9 6
3 1 5 2
*/

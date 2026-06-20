#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

bool b(pair<int,int> a, pair<int, int> b){
    return a.first < b.first;
}

void Solve(){
    int s,n; cin >> s >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), b);
    for(int i = 0; i < n; i++){
        if (s <= v[i].first){
            cout << "NO\n";
            return;
        }
        s += v[i].second;
    }
    cout << "YES" << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

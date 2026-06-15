#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    vector<int> v = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int a; cin >> a;
    for(int e: v){
        if (a % e == 0){
            cout << "YES\n";
            return ;
        }
    }
    cout << "NO" << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


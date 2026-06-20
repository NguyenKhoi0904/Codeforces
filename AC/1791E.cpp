#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)
#define int long long

using namespace std;

void Solve(){
    int n; cin >> n;
    int a[n+1];
    int negative = 0;
    int mi = 1e9;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] <= 0){
            negative++;
        }
        mi = min(mi, max(a[i], (-1)*a[i]));
    }
    int sum = 0;
    for(int i = 1; i <= n; i++) sum = sum + max(a[i], (-1)*a[i]);
    int r = (negative % 2 == 0) ? (sum) : (sum - 2*mi);
    cout << r << ln;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
1
5
1 5 -5 0 2
*/
/*
5
3
-1 -1 -1
5
1 5 -5 0 2
3
1 2 3
6
-1 10 9 8 7 6
2
-1 -1
*/

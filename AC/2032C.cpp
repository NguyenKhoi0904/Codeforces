#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;

using namespace std;

const int maxn = 2e5+5;



void Solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int ans = INT_MAX;
    for(int i = 0, j = i + 2; i < n-2 && j < n;){
        if(a[i] + a[i+1] > a[j]){
            ans = min(ans, n - (j - i + 1));
            j++;
        }else{
            i++, j++;
        }
    }
    if (ans == INT_MAX) cout << n - 2 << ln;
    else cout << ans << ln;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
4
7
1 2 3 4 5 6 7
3
1 3 2
3
4 5 3
15
9 3 8 1 6 5 3 8 2 1 4 2 9 4 7
*/
/*
3
1
0
8
*/

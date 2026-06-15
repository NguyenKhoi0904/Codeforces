#include <bits/stdc++.h>

#define int long long
#define ln "\n"

using namespace std;

int t,n,h;

void Solve(){
    cin >> n >> h;
    int a[n+5];
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 1, r = 1e18;
    int mid = 0, ans = LLONG_MAX;
    while(l <= r){
        mid = (r+l)>>1;
        int tmp = mid;
        for(int i = 0; i < n-1; i++){
            tmp += min(mid, a[i+1] - a[i]);
        }
        if(tmp >= h){
            ans = min(ans, mid);
            r = mid - 1;
        }else l = mid + 1;
    }
    cout << ans << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--) Solve();
    return 0;
}

#include <bits/stdc++.h>

#define ln "\n"

using namespace std;

//MATH
/*
void Solve(){
    int c,m,x; cin >> c >> m >> x;
    if(c == 0 || m == 0 || c + m + x < 3){
        cout << 0 << ln;
        return ;
    }
    if(c - x <= 0 || m - x <= 0){
        cout << min(c, m) << ln;
    }else{
        c -= x; m -= x;
        if(c == m){
            cout << (c+m)/3 + x << ln;
        }else{
            cout << min(min(c,m), (c+m)/3) + x << ln;
        }
    }
}
*/

// BINARY SEARCH
void Solve(){
    int c,m,x; cin >> c >> m >> x;
    int l = 0, r = min(c,m);
    int ans = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(min(c,m) >= mid && ((c+m+x)/3) >= mid){
            l = mid + 1;
            ans = mid;
        }else r = mid - 1;
    }
    cout << ans << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int q; cin >> q;
    while(q--) Solve();
    return 0;
}

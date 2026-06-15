#include <bits/stdc++.h>

#define ln "\n"
#define int long long

using namespace std;

int t;

void Solve(){
    int k,x;
    cin >> k >> x;

    if(k*k < x){
        cout << 2*k - 1 << ln;
        return;
    }

    int l = 1, r = 2*k - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l+r)/2;
        int temp = 0;
        if(mid <= k) temp = mid*(mid+1)/2;
        else{
            int qn = (2*k - 1) - mid;
            temp = k*k - qn*(qn+1)/2;
        }

        if(temp >= x){
            ans = mid;
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

/*
1
2 5
*/


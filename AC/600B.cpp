#include <bits/stdc++.h>

#define ln "\n"
#define int long long

using namespace std;

void Solve(){
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n);
    for(int i = 0; i < m; i++){
        int l = 0, r = n-1;
        int index = -1;
        while(l <= r){
            int mid = (l+r)/2;
            if(b[i] >= a[mid]){
                l = mid + 1;
                index = mid;
            }else r = mid - 1;
        }
        if(index == -1){
            cout << 0 << " ";
        }else{
            cout << index - 0 + 1 << " ";
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

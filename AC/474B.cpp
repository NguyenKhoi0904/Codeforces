#include <iostream>
#include <unordered_map>
#include <cstdint>

#define ln "\n"
#define int long long
using namespace std;

int n,m;

void Solve(){
    unordered_map<int, pair<int,int>> um;
    cin >> n;
    int a[n+5];
    for(int i = 1; i <= n; i++) cin >> a[i];

    um[1] = {1, a[1]};
    int sum = a[1];
    for(int i = 2; i <= n; i++){
        um[i] = {sum + 1, sum + a[i]};
        sum += a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int q; cin >> q;
        int l = 1, r = n;
        while(l <= r){
            int mid = (l+r)>>1;
            if(um[mid].first <= q && q <= um[mid].second){
                cout << mid << ln;
                break;
            }else if(q < um[mid].first) r = mid - 1;
            else l = mid + 1;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

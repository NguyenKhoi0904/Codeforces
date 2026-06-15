#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    ll n,m,k; cin >> n >> m >> k;
    vector<ll> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    bool flag = true;
    for(int i = 0; i < n-1; i++){
        if(h[i] >= h[i+1]) m += (h[i] - max(0LL, h[i+1]-k));
        else{
            ll tmp = h[i+1] - h[i];
            if(tmp <= k){
                m += (h[i] - max(0LL, h[i+1]-k));
            }else if((tmp - m) <= k) m = m - tmp + k;
            else{
                flag = false;
                break;
            }
        }    }
    cout << (flag?"YES\n":"NO\n");
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
/*
2
4 0 1
1 1 1 4
9 60 159
642 609 945 746 421 512 34 195 839
*/

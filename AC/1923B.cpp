#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<ll> a(n),x(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> x[i];
    vector<ll> v(n+1,0);
    for(int i = 0; i < n; i++) v[abs(x[i])] += a[i];
    bool flag = true;
    ll tmp = 0;
    for(int i = 1; i <= n; i++){
        if(v[i] != 0){
            if(k >= v[i]) tmp += k - v[i];
            else if(k+tmp >= v[i]) tmp = k + tmp - v[i];
            else{
                flag = false;
                break;
            }
        }else tmp+=k;
    }
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
1
3 2
1 2 3
-1 2 3
*/

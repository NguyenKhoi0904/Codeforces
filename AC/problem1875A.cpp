#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll a,b,n; cin >> a >> b >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += min(a-1,arr[i]);
    }
    sum += b;
    cout <<  sum << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


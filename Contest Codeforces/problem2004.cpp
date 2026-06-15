#include <iostream>
#include <vector>
#include <algorithm>

#define ln "\n"
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

// PROBLEM 2004A
/*
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(n > 2){
        cout << "NO\n";
    }else{
        if(abs(a[1]-a[0]) >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
}
*/

// PROBLEM 2004B
/*
void Solve(){
    int l,r; cin >> l >> r;
    int L,R; cin >> L >> R;
    if(l == L && r == R){
        cout << r-l << ln;
        return;
    }
    if(l == L || r == R){
        cout << min(r-l,R-L) + 1<< ln;
        return;
    }
    int n = 105, c = 0;
    vector<int> tmp(n, 0);
    for(int i = l; i <= r; i++) tmp[i] = 1;
    for(int i = L; i <= R; i++){
        if(tmp[i] == 0) tmp[i] = 2;
        else{
            tmp[i] = 3;
            c++;
        }
    }
    cout << c+1 << ln;
}
*/

// PROBLEM 2004C
void Solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());
    bool turn = true;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(turn){
            ans += a[i];
            turn = false;
        }else{
            ll v = min(k, a[i-1] - a[i]);
            a[i] += v;
            k -= v;
            ans -= a[i];
            turn = true;
        }
    }
    cout << ans << ln;
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
10 2
5 8 19 9 11 3 4 13 17 10
*/

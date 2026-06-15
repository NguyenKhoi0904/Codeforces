#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
// PROBLEM A
/*
void Solve(){
    int l,r; cin >> l >> r;
    int c = 0;
    for(int i = l; i <= r; i++){
        if(i & 1) c++;
    }
    cout << c/2 << ln;
}
*/

// PROBLEM B
/*
void Solve(){
    int n,m; cin >> n >> m;
    vector<ll> a(n);
    ll ma = 0LL;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    while(m--){
        char c; cin >> c;
        int l,r; cin >> l >> r;
        if(l <= ma && ma <= r){
            if(c == '+') ma++;
            else ma--;
        }
        cout << ma << " ";
    }
    cout << ln;
}
*/

// PROBLEM C
void Solve(){
    int n,a,b; cin >> n >> a >> b;
    int d = __gcd(a,b);
    set<int> s;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        s.insert(tmp%d);
    }
    vector<int> v(s.begin(),s.end());
    int mi = INT_MAX, length = v.size();
    for(int i = 0; i < length-1; i++){
        mi = min(mi, d+v[i] - v[i+1]);
    }
    mi = min(mi, v[length-1] - v[0]);
    cout << mi << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}



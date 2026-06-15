#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(ll a, ll b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
void Solve(){
    ll a,b; cin >> a >> b;
    if (a == b) cout << 0 << " " << 0 << endl;
    else{
        long long g = abs(a-b);
        cout << g << " " << min(a%g, g - a%g) << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


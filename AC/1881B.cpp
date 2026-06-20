#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "YES\n";
    } else {
        vector<ll> arr = {a, b, c};
        sort(arr.begin(), arr.end());
        if (arr[1] % arr[0] != 0 || arr[2] % arr[0] != 0) {
            cout << "NO\n";
        } else {
            if ((arr[1] / arr[0]) - 1 + (arr[2] / arr[0]) - 1 <= 3) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int miA = *min_element(a.begin(), a.end());
    ll sumA = accumulate(b.begin(), b.end(), 0LL,[miA](ll sum, int val){
        return sum + val + miA;
    });
    int miB = *min_element(b.begin(), b.end());
    ll sumB = accumulate(a.begin(), a.end(), 0LL,[miB](ll sum, int val){
        return sum+val+miB;
    });
    cout << min(sumA,sumB) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

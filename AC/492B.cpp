#include <bits/stdc++.h>
#define ll long long
using namespace std;
void Solve(){
    int n,l; cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
//    for(int e : a)
//        cout << e << " ";
//    cout << endl;
    double ans = a[0]-0;
    for (int i = 1; i < n; i++){
        if(1.0*(a[i] - a[i-1])/2 > ans){
            ans = 1.0*(a[i] - a[i-1])/2;
        }
    }
    if(1.0*(l - a[n-1]) > ans){
        ans = 1.0*(l - a[n-1]);
    }
    cout << fixed << setprecision(4) << ans << endl;
}
int main(){
    Solve();
    return 0;
}

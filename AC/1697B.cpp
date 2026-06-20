#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,q; cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector<long long> pf(n+1);
    for(int i = 0; i < n; i++) pf[i+1] = pf[i]+a[i];
    while(q--){
        int x,y; cin >> x >> y;
        cout << pf[n-x+y] - pf[n-x] << endl;
    }
    return 0;
}


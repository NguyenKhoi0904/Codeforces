#include <bits/stdc++.h>

using namespace std;
int main(){
    int k; cin >> k;
    int n = 12;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end(), greater<int>());
    int tmp = 0, c = 0, i = 0;
    while(tmp < k && i < n){
        tmp += a[i];
        c++;
        i++;
    }
    if (tmp >= k) cout << c << endl;
    else cout << -1 << endl;
    return 0;
}


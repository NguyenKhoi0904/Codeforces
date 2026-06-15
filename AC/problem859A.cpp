#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[n-1] <= 25) cout << 0 << endl;
    else cout << a[n-1] - 25 << endl;
    return 0;
}


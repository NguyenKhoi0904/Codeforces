#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int tmp = a[n-1]-a[1];
    tmp = min(tmp, a[n-2]-a[0]);
    cout << tmp << endl;
    return 0;
}


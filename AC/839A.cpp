#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0, day = 0, tmp = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        tmp = min(8,sum);
        sum -= tmp;
        k -= tmp;
        day++;
        if (k <= 0) break;
    }
    if (k <= 0) cout << day << endl;
    else cout << -1 << endl;

    return 0;
}


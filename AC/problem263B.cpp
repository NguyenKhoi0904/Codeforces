#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (k > n){
        cout << -1 << endl;
    }else if (k < n){
        int tmp = a[n-k-1]+1;
        cout << tmp << " " << a[n-k-1] << endl;
    }else {
        int tmp = a[n-k]-1;
        cout << tmp << " " << a[n-k] << endl;
    }
    return 0;
}


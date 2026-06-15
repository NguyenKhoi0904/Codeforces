#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n = 4;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (((a[0] > a[2] && a[0] > a[3]) && (a[1] > a[2] && a[1] > a[3])) || ((a[2] > a[0] && a[2] > a[1]) && (a[3] > a[0] && a[3] > a[1])))
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}


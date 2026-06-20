#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        bool flag = true;
        if (n < m){
            flag = false;
        }else if (n > m){
            if ((n - m) % 2 != 0) flag = false;
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


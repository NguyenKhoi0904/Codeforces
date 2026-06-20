#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int tmp = ceil(1.0*n/2021);
        bool flag = false;
        int c;
        for(int i = 0; i <= tmp; i++){
            c = (i*2020 + (tmp-i)*2021);
            if (c == n){
                flag = true;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


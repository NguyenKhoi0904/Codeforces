#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        if (n > 2){
            int tmp = 2;
            int i;
            for (i = 2; ;i++){
                tmp += x;
                if (tmp >= n) break;
            }
            cout << i << endl;
        }else cout << 1 << endl;
    }
    return 0;
}


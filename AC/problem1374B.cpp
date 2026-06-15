#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        int step = 0;
        bool flag = true;
        while(n != 1){
            if (n % 6 == 0){
                n /= 6;
                step++;
            }else if(n & (n-1)){
                n *= 2;
                step++;
            }else{
                flag = false;
                break;
            }
        }
        if (flag) cout << step << endl;
        else cout << -1 << endl;
    }

    return 0;
}


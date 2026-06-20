#include <bits/stdc++.h>

using namespace std;
void Solve(){
    long long n; cin >> n;
    if (n <= 6){
        cout << 15 << endl;
    }else{
        if (n % 2 != 0){
            cout << fixed << setprecision(0) << (n+1)/2*5 << endl;
        }else cout << fixed << setprecision(0) << n/2*5 << endl;
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    if(n % 3 == 0){
        cout << n/3 << " " << 0 << " " << 0 << endl;
        return;
    }
    if(n % 5 == 0){
        cout << 0 << " " << n/5 << " " << 0 << endl;
        return;
    }
    if(n % 7 == 0){
        cout << 0 << " " << 0 << " " << n/7 << endl;
        return;
    }
    for(int i = 0; i <= 142; i++){
        int tmp = n - 7*i;
        for(int j = 0; j <= 200; j++){
            int temp = tmp - 5*j;
            if(temp >= 0 && temp % 3 == 0){
                cout << temp/3 << " " << j << " " << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    ll c = 0, b = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'B'){
            b++;
            continue;
        }
        c += b;
        if(b > 0){
            b = 0;
            s[i] = 'B';
            i++;
        }
    }
    cout << c << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

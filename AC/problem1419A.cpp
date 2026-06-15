#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    int re = 0, ro = 0;
    int be = 0, bo = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if((s[i]-'0')%2==0) re++;
            else ro++;
        }else{
            if((s[i]-'0')%2==0) be++;
            else bo++;
        }
    }
    if(n%2==0){
        if(be > 0) cout << 2 << endl;
        else cout << 1 << endl;
    }else{
        if(ro > 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

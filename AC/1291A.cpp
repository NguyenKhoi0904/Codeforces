#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int odd = 0;
    for(int i = 0; i < n; i++){
        if((s[i]-'0')%2 !=0) odd++;
    }
    if(odd <= 1){
        cout << -1 << endl;
    }else{
        int c = 0;
        for(int i = 0; i < n; i++){
            if((s[i]-'0')%2 != 0){
                cout << s[i];
                c++;
            }
            if(c == 2) break;
        }
        cout << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

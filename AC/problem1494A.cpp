#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    string s; cin >> s;
    int n = s.size();
    vector<int> d(3);
    int x = s[0]-'A';
    int y = s.back()-'A';
    if(x == y){
        cout << "NO\n";
        return;
    }

    d[x] = 1;
    d[y] = -1;
    if(count(s.begin(), s.end(), 'A' + x) == n/2)
        d[3^x^y] = -1;
    else
        d[3^x^y] = 1;

    int tmp = 0;
    for(char e : s){
        tmp += d[e-'A'];
        if(tmp < 0){
            cout << "NO\n";
            return;
        }
    }
    if(tmp == 0){
        cout << "YES\n";
    }else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

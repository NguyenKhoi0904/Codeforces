#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    string s;
    cin >> s;
    string tmp = "AOYEUIaoyeui";
    string r = "";
    for(int i = 0; i < s.size(); i++){
        if (tmp.find(s[i]) == string::npos){
            r = r + "."+ (char)tolower(s[i]);
        }
    }
    cout << r << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    /*
    queue<char> q;
    q.push("h");
    q.push("e");
    q.push("l");
    q.push("l");
    q.push("o");
    */

    string s; cin >> s;
    string r = "hello";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == r[j]) j++;
    }
    cout << (j == r.size() ? "YES" : "NO") << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


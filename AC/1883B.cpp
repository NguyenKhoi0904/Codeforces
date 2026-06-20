#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> m;
        for(char e : s){
            m[e]++;
        }
        int odd = 0;
        for(auto &e : m){
            if (e.second % 2 != 0)
                odd++;
        }
        if (odd > (k+1)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}


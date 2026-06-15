#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<char,int> m;
    for(char e : s)
        m[e]++;
    for(auto e : m){
        if (e.second > k){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string s; cin >> s;
        unordered_map<char,int> un_m;
        for (char e : s) {
            un_m[e]++;
        }
        int sum = 0;
        for (auto &pair: un_m){
            if (pair.second < m) sum += m - pair.second;
        }
        cout << sum + (7-un_m.size())*m<< endl;
    }
    return 0;
}


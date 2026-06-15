#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        set<char> se;
        for (char e : s){
            se.insert(e);
        }
        string r;
        for (char e : se){
            r += e;
        }
        for (int i = 0; i < n ; i++){
            int tmp = r.find(s[i]);
            s[i] = r[0+(r.size() - 1 - tmp)];
        }
        cout << s << endl;
    }
    return 0;
}


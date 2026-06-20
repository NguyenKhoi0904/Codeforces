#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int c = 0;
        for(char e : s){
            if (e == 'U')
                c++;
        }
        if (c % 2 != 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


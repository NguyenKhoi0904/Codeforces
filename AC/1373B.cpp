#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int c0 = 0, c1 = 0;
        for(char e : s){
            if (e == '0') c0++;
            else c1++;
        }
        int tmp = min(c0,c1);
        if (tmp % 2 != 0) cout << "DA\n";
        else cout << "NET\n";
    }
    return 0;
}


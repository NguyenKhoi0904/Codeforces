#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        char max_s = *max_element(s.begin(), s.end());
        cout << 26 - ('z'-max_s) << endl;
    }
    return 0;
}


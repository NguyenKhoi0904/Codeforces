#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;
        string s = "";
        int i;
        for (int i = 0; i < n; ++i) {
            s += (char)('a' + (i % b));
        }
        cout << s << endl;
    }
    return 0;
}


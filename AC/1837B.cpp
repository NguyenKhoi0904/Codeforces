#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int c = 1, m= -1;
        for(int i = 1; i < n; i++){
            if (s[i] != s[i-1]){
                m = max(m,c);
                c = 1;
            }else c++;
        }
        m = max(m,c);
        cout << m+1 << endl;
    }
    return 0;
}


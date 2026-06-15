#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    int c = 1;
    int r = INT_MIN;
    for(int i = 1; i < n; i++){
        if (s[i] == s[i-1]) c++;
        else{
            r = max(r,c);
            c=1;
        }
    }
    r = max(r,c);
    if (r >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

//00100110111111101

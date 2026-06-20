#include<bits/stdc++.h>

using namespace std;

int main(){
    long long x; cin >> x;
    string s = to_string(x);
    int c = 0;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] != '0') break;
        else c++;
    }
    reverse(s.begin(), s.end());
    for(int i = 1; i <= c; i++){
        s += '0';
    }
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(tmp == s) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

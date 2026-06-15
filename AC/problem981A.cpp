#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    map<char,int> m;
    for(char e : s){
        m[e]++;
    }
    if (m.size() == 1) cout << 0 << endl;
    else{
        string tmp = s;
        reverse(s.begin(), s.end());
        if (tmp == s){
            cout << s.size()-1 << endl;
        }else cout << s.size() << endl;
    }
    return 0;
}


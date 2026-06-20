#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> se;
    for (char &c : s){
        if (c >= 65 && c <= 90)
            c+=32;
        se.insert(c);
    }
    if (se.size() == 26)    cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


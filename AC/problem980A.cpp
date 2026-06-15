#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int c = 0, o = 0;
    for(char e : s){
        if (e == '-') c++;
        else o++;
    }
    if (o == 1 || o == 0) cout << "YES\n";
    else if(c % o == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


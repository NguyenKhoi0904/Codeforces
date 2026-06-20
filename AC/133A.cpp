#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    bool flag = false;
    for (char e : s){
        if (e == 'H' || e == 'Q' || e == '9'){
            flag = true;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int tmp = static_cast<int>(s[0]);
    if (tmp >= 97){
        s[0] = static_cast<char>(tmp-32);
    }
    cout << s << endl;
    return 0;
}


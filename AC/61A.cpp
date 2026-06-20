#include <bits/stdc++.h>

using namespace std;
int main(){
    string s1,s2; cin >> s1 >> s2;
    string r;
    int carry = 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] == s2[i]) r += '0';
        else r += '1';
    }
    cout << r << endl;
    return 0;
}


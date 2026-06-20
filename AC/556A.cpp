#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int c0 = 0, c1 = 0;
    for (char e: s){
        if (e == '0') c0++;
        else c1++;
    }
    cout << abs(c0-c1) << endl;
    return 0;
}


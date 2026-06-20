#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        unordered_map<char,int> un_m;
        for(char e : s)
            un_m[e]++;
        if (un_m['A'] > un_m['B']) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}


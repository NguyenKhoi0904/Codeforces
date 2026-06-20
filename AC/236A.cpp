#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    map<char,int> m;
    for (auto c : s){
        if (m.find(c) == m.end()){
            m[c] = 1;
        }
    }
    if (m.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else   cout << "IGNORE HIM!" << endl;
    return 0;
}

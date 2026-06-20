#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; getline(cin, s);
    set<char> se;
    for (char c : s){
        if (c >= 'a' && c <= 'z')
            se.insert(c);
    }
    cout << se.size() << endl;
    return 0;
}


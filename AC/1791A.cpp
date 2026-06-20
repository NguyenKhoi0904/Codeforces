#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v;
    string s = "codeforces";
    set<char> se;
    for(char e: s)
        se.insert(e);
    while(n--){
        char c; cin >> c;
        cin.ignore();
        if (se.find(c) != se.end()) v.push_back("YES");
        else v.push_back("NO");
    }
    for (string e: v)   cout << e << endl;
    return 0;
}


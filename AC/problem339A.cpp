#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    vector<char> v;
    for (char c: s){
        if (c != '+'){
            v.push_back(c);
        }
    }
    s = "";
    sort(v.begin(),v.end());
    int n = v.size();
    for (int i = 0; i < n-1; i++){
        s = s + v[i] + '+';
    }
    s = s + v[n-1];
    cout << s << endl;
    return 0;
}


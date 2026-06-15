#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string t = "Timur";
        map<char,int> se;
        for (char e : t)
            se[e]++;
        string s; cin >> s;
        map<char,int> tmp;
        for(char e : s)
            tmp[e]++;
        if (tmp == se)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    vector<string> v(t);
    int i;
    for(i = 0; i < t; i++)  cin >> v[i];
    for(i = 0; i < t; i++){
        for(char& c: v[i])
            c = toupper(c);
        if (v[i] == "YES")
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


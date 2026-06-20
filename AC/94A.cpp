#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n=10;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string ans;
    for(int i = 0; i < s.size(); i+=10){
        for(int j = 0; j < n; j++){
            if (a[j] == s.substr(i,10))
                ans += to_string(j);
        }
    }
    cout << ans << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int cost = 0;
    int x = 0, y = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'U') y++;
        else x++;
        if(x == y && s[i] == s[i+1]) cost++;
    }
    cout << cost << endl;
    return 0;
}


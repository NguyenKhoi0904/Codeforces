#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int d = 0, a = 0;
    for (char c : s){
        if (c == 'A') a++;
        else d++;
    }
    if (a == d) cout << "Friendship" << endl;
    else if (a > d) cout << "Anton" << endl;
    else cout << "Danik" << endl;
    return 0;
}


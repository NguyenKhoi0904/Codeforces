#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n; cin >> n;
    string s = to_string(n);
    int near_lucky = 0;
    for(char e: s){
        if (e == '4' || e == '7')   near_lucky++;
    }
    if (near_lucky == 4 || near_lucky == 7) cout << "YES" << endl;
    else cout << "NO\n";
    return 0;
}


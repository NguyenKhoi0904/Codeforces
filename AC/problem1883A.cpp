#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    string s; cin >> s;
    int ans = ((s[0]-'0')==0?10:(s[0]-'0'));
    for(int i = 1; i < 4; i++){
        if(s[i] == '0'){
            if(s[i-1] != '0') ans += abs(s[i-1]-'0' - 10) + 1;
            else ans += 1;
        }
        else if(s[i-1] == '0') ans += abs(10 - (s[i]-'0'))+1;
        else ans += abs(s[i] - s[i-1])+1;
    }
    cout << ans << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
/*
1
1010
*/

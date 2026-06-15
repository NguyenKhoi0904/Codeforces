#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    string s; cin >> s;
    int n = s.size();
    bool flag1 = true, flag2= true;
    if(isupper(s[0])){
        for(int i = 1; i < n; i++){
            if(islower(s[i])){
                flag1 = false;
                break;
            }
        }
        if (flag1){
            for(int i = 0; i < n; i++) putchar(tolower(s[i]));
            return;
        }
    }
    if(islower(s[0])){
        for(int i=1; i < n; i++){
            if(islower(s[i])){
                flag2 = false;
                break;
            }
        }
        if(flag2){
            putchar(toupper(s[0]));
            for(int i = 1; i < n; i++) putchar(tolower(s[i]));
            return;
        }
    }
    cout << s << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}


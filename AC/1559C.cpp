#include <bits/stdc++.h>

#define ln "\n"

using namespace std;

//const int maxn = 1e4+5;
int n;

void Solve(){
    cin >> n;
    int a[n+5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    if(a[1])
    {
        cout << n+1 << " ";
        for(int i = 1; i <= n; i++) cout << i << " ";
        cout << ln;
    }
    else if(!a[n])
    {
        for(int i = 1; i <= n+1; i++) cout << i << " ";
        cout << ln;
    }
    else
    {
        for(int i = 1; i < n; i++){
            if(!a[i] && a[i+1]){
                for(int j = 1; j <= i; j++) cout << j << " ";
                cout << n+1 << " ";
                for(int j = i+1; j <= n; j++) cout << j << " ";
                cout << ln;
                return;
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
1
4
0
*/

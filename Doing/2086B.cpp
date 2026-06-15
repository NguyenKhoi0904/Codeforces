#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)
#define int long long

using namespace std;

void Solve(){
    int n,k,x; cin >> n >> k >> x;


    int a[n+5];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum * k < x){
        cout << 0 << ln;
        return;
    }

    int tmp = 0, last_l = 0;
    for(int i = 0; i < n*k; i++){
        tmp += a[i % n];
        if(sum * k - last_l < x){
            cout << n*k - (n*k - i) << ln;
            return;
        }else last_l = tmp;
    }
    cout << n*k << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}

/*
1
15 97623 1300111
105 95 108 111 118 101 95 118 97 108 111 114 97 110 116
*/

/*
1
5 2 1300111
100546 574068 14200 643 504753
*/

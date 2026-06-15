#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define int long long

using namespace std;

const int maxl = 2e5+5;

int n,q;

int a[maxl], k[maxl];
int pf[maxl];

void Solve(){
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= q; i++) cin >> k[i];

    for(int i = 1; i <= n; i++){
        pf[i] = pf[i-1] + a[i];
    }

    int l = 1, r = n, tmp = 0, died = 0;
    for(int i = 1; i <= q; i++){
        int index = -1;
        tmp += k[i];
        while(l <= r){
            int mid = (l+r)/2;
            if(pf[mid] > tmp){
                index = mid;
                r = mid - 1;
            }else l = mid + 1;
        }

        if(index == -1){
            cout << n << ln;
            l = 1;
            tmp = 0;
        }else{
            l = index;
            cout << n - index + 1 << ln;
        }

        r = n;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

/*
5 5
1 2 1 2 1
3 10 1 1 1
*/
/* output
3
5
4
4
3
*/

/*
4 4
1 2 3 4
9 1 10 6
*/
/* output
1
4
4
1
*/

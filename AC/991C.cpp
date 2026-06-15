#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define int long long

using namespace std;

const int inf = 1e18;

int n;

void Solve(){
    cin >> n;
    int ans = inf;
    int l = 1, r = n;
    int half = (n+1)/2;
    while(l <= r){
        int k = (l+r)/2;

        int tmp = n;
        int sum = 0, p = 0, sum_p = 0;
        while(sum < half){
            if(tmp - k >= 10){
                sum += k;
                p = (tmp-k) / 10;
                tmp -= (k+p);
            }else{
                sum += tmp;
                break;
            }
        }

        if(sum >= half){

            ans = k;
            r = k - 1;
        }else l = k + 1;
    }
    cout << ans << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
/*
43
*/
//1

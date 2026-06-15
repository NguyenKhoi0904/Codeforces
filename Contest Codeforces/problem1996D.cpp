#include <iostream>
#include <algorithm>

#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n,x; cin >> n >> x;
    int ans = 0;
    for(int a = 1; a <= n; a++){
        for(int b = 1; a*b <= n; b++){
            int tmp = min((n - (a*b)) / (a+b), x-a-b);
            if(tmp >= 1){
                ans += tmp;
                cout << a << b << tmp << ln;
            }
        }
    }
    cout << ans << ln;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

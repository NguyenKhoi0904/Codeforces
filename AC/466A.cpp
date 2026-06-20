#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,m,a,b; cin >> n >> m >> a >> b;
    int ans = INT_MAX;
    for(int i = 0; i <= n; i++){
        int tmp = n - i;
        int rest = (tmp+m-1)/m;
        ans = min(ans, i*a + rest*b);
    }
    cout << ans << endl;
}
int main(){
    Solve();
    return 0;
}
//10 3 5 1

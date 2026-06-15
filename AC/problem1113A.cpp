#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, v; cin >> n >> v;
    int ans = v-1;
    if(n-1 <= v){
        cout << n-1 << endl;
        return 0;
    }
    for(int i = 1; i <= n-v; i++){
        ans += i;
    }
    cout << ans << endl;
    return 0;
}


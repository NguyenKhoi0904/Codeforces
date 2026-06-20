#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f(int n){
    ll tmp = 0;
    for(int i = 2; i <= n/2; i++){
        if (n % i == 0){
            tmp = i;
            break;
        }
    }
    if (tmp == 0) return n;
    return tmp;
}
void Solve(){
    ll n,k; cin >> n >> k;
    if (n %  2 == 0){
        n = n + 2*k;
    }else n = n + 2*(k-1)+f(n);
    cout << n << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,a,b,c,d; cin >> n >> a >> b >> c >> d;
    long long min = (a-b)*n, max = (a+b)*n;
    if (max < (c-d) || (c+d) < min)
        cout << "NO\n";
    else cout << "YES\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

//if (((c-d)<= n*(a-b) && n*(a-b)<=(c+d)) || ((c-d) <= n*(a+b) && n*(a+b)<=(c+d))){
//            cout << "YES\n";
//        }else cout << "NO\n";

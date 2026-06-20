#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t,s,x; cin >> t >> s >> x;
    if(t == x){
        cout << "YES\n";
        return 0;
    }
    int tmp = (x-t);
    if((tmp%s == 0 && tmp > 0) || ((tmp-1)%s == 0 && (tmp-1)>0)){
        cout << "YES\n";
    }else cout << "NO\n";
    return 0;
}

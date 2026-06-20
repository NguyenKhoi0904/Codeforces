#include <iostream>

#define ln "\n"
#define ll long long
using namespace std;

int main(){
    ll n,m,a; cin >> n >> m >> a;
    ll ans = (n/a + ((n%a==0)?0:1)) * (m/a + ((m%a==0)?0:1));
    cout << ans << ln;
    return 0;
}

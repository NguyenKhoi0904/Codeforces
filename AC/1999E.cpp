#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"

using namespace std;
const int MAXN = 2e5+10;
vector<int> length(MAXN,0), prefix(MAXN,0);
int ternary(int n){
    int c = 0;
    while(n != 0){
        c++;
        n/=3;
    }
    return c;
}
void Solve(){
    int l,r; cin >> l >> r;
    cout << length[l] + prefix[r+1] - prefix[l] << ln;
}
int main(){
    for(int i = 0; i < MAXN-1; i++){
        length[i] = ternary(i);
        prefix[i+1] = prefix[i] + length[i];
    }
    IO
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    int tmp = (n+1)/2;
    cout << tmp << endl;
    int starti = 1, endi = 3*n;
    for(int i = 0; i < tmp; i++){
        cout << starti << " " << endi << endl;
        starti+=3;
        endi-=3;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

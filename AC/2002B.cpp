#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    if(a == b) cout << "Bob\n";
    else{
        reverse(b.begin(), b.end());
        if(a == b) cout << "Bob\n";
        else cout << "Alice\n";
    }
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
/*
2
4
4 3 1 2
4 1 3 2
4
1 4 3 2
2 3 4 1
*/

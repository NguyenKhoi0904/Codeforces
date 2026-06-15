#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    if (3*n <= k) cout << 0 << endl;
    else cout << 3*n-k << endl;
    return 0;
}


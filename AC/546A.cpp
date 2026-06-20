#include <bits/stdc++.h>

using namespace std;
int main(){
    int k,n,w; cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        n = n - i*k;
    }
    if (n >= 0)  cout << 0 << endl;
    else cout << -1 * n << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n){
    int k = sqrt(n);
    for (int i = 2; i <= k; i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n,m; cin >> n >> m;
    bool flag = true;
    for (int i = n+1; i < m; i++){
        if (is_prime(i))    flag = false;
    }
    if (flag && is_prime(m)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


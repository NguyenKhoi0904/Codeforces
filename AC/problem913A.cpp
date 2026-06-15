#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    if (n >= 27){
        cout << m << endl;
        return 0;
    }
    cout << m % (1 << n) << endl;
    return 0;
}


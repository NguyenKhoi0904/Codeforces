#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c,d; cin >> a >> b >> c >> d;
        int i;
        if ((a < d && d < b && b < c) || (a < c && c < b && b < d)
        || (b < d && d < a && a < c) || (b < c && c < a && a < d)
        || (c < a && a < d && d < b) || (c < b && b < d && d < a)
        || (d < a && a < c && c < b)  || (d < b && b < c && c < a)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}


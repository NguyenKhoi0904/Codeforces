#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;
        bool flag = false;
        int new_a = b - (c - b);
        if(new_a >= a && new_a % a == 0 && new_a != 0) {
            flag = true;
        }

        int new_b = a + (c - a)/2;
        if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
            flag = true;
        }

        int new_c = a + 2*(b - a);
        if(new_c >= c && new_c % c == 0 && new_c != 0) {
            flag = true;
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


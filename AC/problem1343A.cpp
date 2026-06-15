#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x;
        for(int i = 2; i <= 29; i++){
            int tmp = pow(2,i)-1;
            if (n % tmp == 0){
                x = n / tmp;
                break;
            }
        }

        cout << x << endl;
    }
    return 0;
}


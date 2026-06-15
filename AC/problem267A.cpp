#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long sought_number = 0;
        long long a,b; cin >> a >> b;
        int tmp;
        while(a != 0 && b != 0){
            tmp =  max(a,b)/min(a,b);
            sought_number += tmp;
            if (a > b){
                a = a - b*tmp;
            }else{
                b = b - a*tmp;
            }
        }
        cout << sought_number << endl;
    }
    return 0;
}


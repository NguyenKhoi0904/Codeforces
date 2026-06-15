#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    while(b != 0){
        int tmp = b;
        b = a%b;
        a = tmp;
    }
    return a;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int max_gcd = -1;
        if (n <= 3){
            max_gcd = 1;
        }else{
            if (n % 2 == 0){
                max_gcd = n/2;
            }else max_gcd = (n-1)/2;
        }
        cout << max_gcd << endl;
    }
    return 0;
}


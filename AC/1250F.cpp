#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n){
    int k = sqrt(n);
    if (n < 2) return false;
    for(int i = 2; i <= k; i++){
        if (n % i == 0) return false;
    }
    return true;
}

bool chinh_phuong(int n){
    return sqrt(n) == (int)sqrt(n);
}
int main(){
    int n; cin >> n;
    if (is_prime(n)){
        cout << n*2 + 2 << endl;
    }else{
        if(chinh_phuong(n)){
            cout << sqrt(n)*4 << endl;
        }else{
            int tmp = ceil(1.0*n/4);
            int m = INT_MAX;
            for (int i = 2; i <= tmp; i++){
                if (n % i == 0){
                    m = min((i*2)+(n/i)*2,m);
                }
            }
            cout << m << endl;
        }
    }
    return 0;
}



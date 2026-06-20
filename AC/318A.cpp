#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n,k; cin >> n >> k;
    long long sum;
    if (n % 2 == 0){
        if (k <= n/2){
            sum = 2*k-1;
        }else{
            sum = 2*(k - n/2);
        }
    }else{
        if (k <= (ceil(1.0*n/2))){
            sum = 2*k-1;
        }else{
            sum = 2*(k-(ceil(1.0*n/2)));
        }
    }
    cout << sum << endl;
    return 0;
}


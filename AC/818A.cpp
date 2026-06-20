#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n,k; cin >> n >> k;
    long long c;
    long long d = n /(2*(k+1));
    while(d >= 0){
        if ((k+1)*d <= n/2){
            c = d*k;
            break;
        }else d--;
    }
    cout << d << " " << c << " " << n-(d+c) << endl;
    return 0;
}

//    if (k > n){
//        cout << 0 << 0 << n << endl;
//    }else{
//        int c;
//        int d = n /(2*(k+1));
//        while(d >= 0){
//            if ((k+1)*d <= n/2){
//                c = d*k;
//                break;
//            }else d--;
//        }
//        cout << d << " " << c << n-(d+c) << endl;
//    }

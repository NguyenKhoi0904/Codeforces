#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int m;
    while(n != 0){
        if (n >= 100){
            n -= 100;
            m++;
        }else if (n >= 20){
            n -= 20;
            m++;
        }else if (n >= 10){
            n -= 10;
            m++;
        }else if (n >= 5){
            n -= 5;
            m++;
        }else{
            n -= 1;
            m++;
        }
    }
    cout << m << endl;
    return 0;
}


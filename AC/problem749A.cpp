#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int k = n / 2;
    if (n % 2 == 0){
        cout << k << endl;
        while(k--){
            cout << 2 << " ";
        }
    }else{
        cout << k << endl;
        for (int i = 1; i < k; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}


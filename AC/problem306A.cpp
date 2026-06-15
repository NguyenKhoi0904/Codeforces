#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    if (n % m == 0){
        int tmp = n/m;
        while(m--){
            cout << tmp << " ";
        }
    }else{
        int tmp = n/m;
        int du = n%m;
        int temp = m-du;
        while(temp--){
            cout << tmp << " ";
        }
        while(du--) cout << tmp+1 << " ";
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        if(x % 3 == 0 || x % 7 == 0)
            cout << "YES\n";
        else{
            bool flag = false;
            for(int i = 1; i <= 33; i++){
                if ((x - 3*i)%7==0 && (x - 3*i) > 0){
                    flag = true;
                    break;
                }
            }
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}


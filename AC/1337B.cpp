#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        bool flag = false;
        int x,n,m; cin >> x >> n >> m;
        while(n != 0 && m != 0){
            if ((x/2)+10 >= x){
                x = x-10;
                m--;
            }else{
                x = (x/2)+10;
                n--;
            }
        }
        if (x <= 0){
            flag = true;
        }else{
            while(n != 0){
                x = (x/2)+10;
                n--;
            }
            while(m != 0){
                x = x - 10;
                m--;
            }
            if (x <= 0) flag = true;
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO\n";
    }
    return 0;
}


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,x,y; cin >> n >> x >> y;
    if(x == 0 && y == 0){
        cout << -1 << endl;
        return;
    }
    if(x > 0 && y >> 0){
        cout << -1 << endl;
        return;
    }
    if(x == 0){
       swap(x,y);
    }
    if((n-1)%x == 0){
        int tmp = (n-1)/x;
        int c = 1;
        while(tmp--){
            for(int i = 1; i <= x; i++)
                cout << c << " ";
            if(c == 1) c++;
            c+=x;
        }
    }else{
        cout << -1;
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

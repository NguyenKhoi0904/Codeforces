#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int ds = 0, ss = 0; // ds = different socks, ss = same socks
    while(a != 0 && b != 0){
        a--;
        b--;
        ds++;
    }
    while(a != 0){
        if ((a-2) >= 0){
            a-=2;
            ss++;
        }else   break;
    }
    while(b != 0){
        if ((b-2) >= 0){
            b-=2;
            ss++;
        }else   break;
    }
    cout << ds << " " << ss << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int time = 4 * 60 - k;
    int tmp, p = 0;
    for (int i = 1; i <= n; i++){
        tmp = 5 * i;
        if (tmp > time) break;
        else {
            p++;
            time-=tmp;
        }
    }
    cout << p << endl;
    return 0;
}


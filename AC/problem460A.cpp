#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    int tmp = 0;
    int c = 0;
    while(n != 0){
        n--;
        tmp++;
        c++;
        if(tmp == m){
            n++;
            tmp = 0;
        }
    }
    cout << c << endl;
    return 0;
}


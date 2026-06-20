#include <bits/stdc++.h>

using namespace std;
int main(){
    int c,v0,v1,a,l; cin >> c >> v0 >> v1 >> a >> l;
    int day = 1;
    c = c - v0;
    while(c > 0){
        int tmp = v0 + day*a;
        if (tmp <= v1){
            c = c - tmp;
            c += l;
            day++;
        }else{
            c = c - v1;
            c += l;
            day++;
        }
    }
    cout << day << endl;
    return 0;
}


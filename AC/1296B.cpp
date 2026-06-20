#include <bits/stdc++.h>

using namespace std;
void Solve(){
    long long s; cin >> s;
    long long sum = 0;
    int du;
    long long tmp;
    while(s >= 10){
        du = s%10;
        sum = sum + s-du;
        s = (s-du)/10 + du;
    }
    sum += s;
    cout << sum << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


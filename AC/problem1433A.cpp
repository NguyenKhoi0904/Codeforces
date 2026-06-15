#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 0;
        for(int i = 1; i <= to_string(n).size(); i++){
            sum += i;
        }
        sum += 10*(n % 10 - 1);
        cout << sum << endl;
    }
    return 0;
}


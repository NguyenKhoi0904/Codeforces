#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int s = 0;
    for (int i = 1; i <= n/2; i++){
        int tmp = n-i;
        if (tmp % i == 0) s++;
    }
    cout << s << endl;
    return 0;
}


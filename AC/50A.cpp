#include <bits/stdc++.h>

using namespace std;
int main(){
    int m,n; cin >> m >> n;
    int total_squares = m*n;
    if (total_squares % 2 == 0){
        cout << total_squares / 2 << endl;
    }
    else cout << (total_squares-1)/2 << endl;
    return 0;
}


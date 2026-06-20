#include <bits/stdc++.h>

using namespace std;
int main(){
    int  n; cin >> n;
    string s1 = "I hate that ";
    string s2 = "I love that ";
    string r;
    if (n == 1){
         cout << "I hate it";
         return 0;
    }
    for (int i = 1; i < n; i++){
        if (i % 2 != 0) r += s1;
        else r += s2;
    }
    if (n % 2 == 0) r += "I love it";
    else r += "I hate it";
    cout << r << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string a,b; cin >> a >> b;
    int n; cin >> n;
    cout << a << " " << b << endl;
    for(int i = 1; i <= n; i++){
        string x,y; cin >> x >> y;
        if (x == a) a = y;
        else if (y == a) a = x;
        else if (x == b) b = y;
        else if (y == b) b = x;
        cout << a << " " << b << endl;
    }
    return 0;
}


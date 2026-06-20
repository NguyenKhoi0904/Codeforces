#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,x,y; cin >> n >> x >> y;
    int tmp = (ceil((1.0*y/100)*n) - x);
    cout << max(tmp, 0) << endl;
    return 0;
}


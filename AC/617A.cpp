#include <bits/stdc++.h>

using namespace std;
int main(){
    int x; cin >> x;
    int step = 0;
    while (x > 5){
        x-=5;
        step++;
    }
    x-=x;
    step++;
    cout << step << endl;
    return 0;
}


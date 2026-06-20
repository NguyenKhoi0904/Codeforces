#include <bits/stdc++.h>

using namespace std;
int main(){
    int k,r; cin >> k >> r;
    int money,i = 1;
    while(true){
        money = i * k;
        if (money % 10 == 0) break;
        else if (money % 10 == r)  break;
        else    i++;
    }
    cout << i << endl;
    return 0;
}


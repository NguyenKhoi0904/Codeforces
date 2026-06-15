#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int height = 0;
    int sum = 0;
    for(int i = 1; ; i++){
        sum += i;
        if (n - sum >= 0){
            n = n - sum;
            height++;
        }else break;
    }
    cout << height << endl;
    return 0;
}


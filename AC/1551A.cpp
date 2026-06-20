#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c1,c2;
        int c2_1 = ceil(n*1.0/3);
        int c2_2 = n/3;
        if (c2_1 == c2_2){
            c1 = n - 2*c2_1;
            c2 = c2_1;
        }else{
            c1 = (abs((n-2*c2_1) - c2_1) > (abs((n-2*c2_2) - c2_2)))?(n-2*c2_2):(n-2*c2_1);
            c2 = (n - c1)/2;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}


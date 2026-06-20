#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string tmp = to_string(n);
    int length = tmp.size();
    int a = pow(10,length-1);
    int m = tmp[0]-'0';
    cout << m*a+a - n << endl;
    return 0;
}


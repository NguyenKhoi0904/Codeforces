#include <bits/stdc++.h>

using namespace std;
bool even_number(int n);
int main(){
    int n;
    cin >> n;
    if (even_number(n))
        cout << "Yes" << endl;
    else    cout << "No" << endl;
    return 0;
}
bool even_number(int n){
    if (n == 2) return false;
    return n % 2 == 0;
}


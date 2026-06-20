#include <bits/stdc++.h>

using namespace std;
int ucln(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main(){
    int y,w; cin >> y >> w;
    int d = 6 - max(y,w) + 1;
    int tmp = ucln(d,6);
    cout << d / tmp << "/" << 6 / tmp << endl;
    return 0;
}


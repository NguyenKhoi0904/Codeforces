#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    b[1] = a[1]-1;
    for (int i = 2; i <= n; i++){
        if (a[i] - 1 == a[i-1]){
            b[i] = b[i-1]+1;
        }else{
            if (a[i] - i > b[i-1])
                b[i] = a[i] - i;
            else b[i] = b[i-1]+1;
        }
    }
    b.erase(b.begin());
    for(auto e : b){
        cout << e << endl;
    }
    return 0;
}

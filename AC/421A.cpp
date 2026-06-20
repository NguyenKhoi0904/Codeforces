#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,a,b; cin >> n >> a >> b;
    vector<int> v(n,0);
    int tmp;
    while(a--){
        cin >> tmp;
        v[tmp-1] = 1;
    }
    while(b--){
        cin >> tmp;
        if (v[tmp-1] == 0) v[tmp-1] = 2;
    }
    for (int e : v) cout << e << " ";
    return 0;
}


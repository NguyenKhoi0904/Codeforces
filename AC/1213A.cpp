#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int odd = 0, even = 0;
    for(int e : a){
        if (e % 2 == 0) even++;
        else odd++;
    }
    cout << min(odd, even) << endl;
    return 0;
}


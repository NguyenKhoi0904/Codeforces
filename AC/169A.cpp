#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,a,b; cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    cout << v[a-1] - v[a] << endl;
    return 0;
}

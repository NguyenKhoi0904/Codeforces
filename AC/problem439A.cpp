#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,d; cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = accumulate(a.begin(), a.end(), 0);
    int rest = (n-1)*10;
    if (rest+sum > d){
        cout << -1 << endl;
        return 0;
    }
    cout << rest/5 + (d-(rest+sum))/5 << endl;
    return 0;
}


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sp = 0;
//    sort(a.begin(), a.end());
    int mi = *min_element(a.begin(), a.end());
    int ma = *max_element(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if (a[i] > mi && a[i] < ma) sp++;
    }
    cout << sp << endl;n
    return 0;
}


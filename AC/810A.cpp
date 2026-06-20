#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = accumulate(a.begin(), a.end(),0);
    int c = 0;
    while(round(1.0*sum/n) != k){
        sum+=k;
        n++;
        c++;
    }
    cout << c << endl;
    return 0;
}


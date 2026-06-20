#include <bits/stdc++.h>

using namespace std;
bool checkSum(int sum, int n){
    return sum*10 >= n*45;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    int sum =  accumulate(a.begin(), a.end(), 0);
    while(!checkSum(sum, n)){
        sum += 5 - a[ans];
        ans++;
    }
    cout << ans << endl;
    return 0;
}


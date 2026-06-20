#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int x; cin >> x;
    vector<int> a;
    int sum = 0, last = 9;
    while(sum < x && last > 0){
        a.push_back(min(x-sum,last));
        sum += last;
        last--;
    }
    if (sum < x) cout << -1 << endl;
    else{
        reverse(a.begin(), a.end());
        for(int e : a)
            cout << e;
        cout << "\n";
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


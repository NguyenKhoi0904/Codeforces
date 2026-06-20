#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    while(b != 0){
        int tmp = b;
        b = a%b;
        a = tmp;
    }
    return a;
}
bool isEven(int n){
    return n%2==0;
}
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    partition(a.begin(), a.end(), isEven);
    int good = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (a[i] % 2 == 0) good++;
            else{
                if (gcd(a[i],a[j])>1) good++;
            }
        }
    }
    cout << good << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

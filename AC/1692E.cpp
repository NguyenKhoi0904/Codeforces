#include <bits/stdc++.h>

#define ln "\n"

using namespace std;

int n,s;

void Solve(){
    cin >> n >> s;
    vector<int> a(n+1,0), preffix(n+1,0);
    int sum = 0, operation = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(s > sum){
        cout << -1 << ln;
        return;
    }

    for(int i = 1; i <= n; i++){
        preffix[i] = preffix[i-1] + a[i];
    }

    for(int i = 1; i <= n; i++){
        int l = i, r = n;
        while(l <= r){
            int mid = (l+r)/2;
            if(preffix[mid] - preffix[i-1] == s){
                operation = min(operation, (n-mid) + (i-1));
                l = mid + 1;
            }else if(preffix[mid] - preffix[i-1] > s) r = mid - 1;
            else l = mid + 1;
        }
    }

    cout << operation << ln;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
7
3 1
1 0 0
3 1
1 1 0
9 3
0 1 0 1 1 1 0 0 1
6 4
1 1 1 1 1 1
5 1
0 0 1 1 0
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1
6 3
1 0 1 0 0 0
*/
/*
1
8 1
0 1 0 1 0 1 1 0
*/
/*
1
9 3
0 1 0 1 1 1 0 0 1
*/

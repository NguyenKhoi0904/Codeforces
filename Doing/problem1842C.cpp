#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
#define maxn (int)2e5
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> dp(n+1,0);
    vector<int> dp_index(maxn+1,-1);
    dp_index[a[0]] = 0;
    int tmp = 0, m = -1;
    for(int i = 1; i < n; i++){
        if(dp_index[a[i]] == -1){
            dp_index[a[i]] = i;
            dp[i] = dp[i-1];
        }
        else{
            int tmp = i - dp_index[a[i]] + 1;
            if(tmp > dp[i-1]){
                dp[i] = tmp;
                m = i;
            }
            else if(m > dp_index[a[i]]){
                dp[i] = dp[i-1];
            }else dp[i] = tmp + dp[i-1];
        }
    }
    cout << dp[n-1] << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
/*
1
5
1 2 2 3 3
*/

/*
1
4
1 2 1 2
*/

/*
33
6
2 2 2 1 3 1
6
2 1 3 4 1 6
6
3 1 1 3 1 3
6
1 2 1 1 2 4
6
2 3 2 3 2 3
6
2 5 2 2 5 5
5
1 2 5 5 4
6
4 5 1 1 4 4
6
1 1 4 5 4 5
6
4 1 6 4 6 4
6
2 1 4 4 6 6
6
2 2 3 2 6 4
5
4 5 5 4 1
6
5 5 5 5 5 4
4
1 4 3 1
6
5 6 6 1 1 2
6
4 3 2 3 3 1
3
2 2 2
6
5 2 4 3 1 3
6
2 2 6 3 6 2
4
3 3 3 2
6
5 1 4 6 5 6
4
2 2 1 4
6
4 4 3 4 4 3
6
5 2 1 3 3 4
4
4 2 1 3
5
5 5 3 5 1
6
3 3 2 5 2 3
6
4 5 2 4 4 1
6
4 3 5 4 1 4
6
1 6 3 2 3 4
6
1 5 1 3 4 2
6
2 1 1 1 2 1
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
//void Solve(){
//    int n,k; cin >> n >> k;
//    vector<int> h(n);
//    for(int i = 0; i < n; i++) cin >> h[i];
//    int sum = 0, mi = INT_MAX, ans = 1;
//    for(int i = 0; i < k; i++) sum += h[i];
//    mi = min(mi, sum);
//    int left = 0, right = k;
//    while(right < n){
//        sum += h[right];
//        sum -= h[left];
//        right++;
//        left++;
//        if(sum < mi){
//            ans = left+1;
//            mi = sum;
//        }
//    }
//    cout << ans << ln;
//}
void Solve(){
    int n,k; cin >> n >> k;
    vector<int> prefix(n+1,0);
    for(int i = 1; i <= n; i++){
        int tmp; cin >> tmp;
        prefix[i] = prefix[i-1] + tmp;
    }
    int mi = INT_MAX, ans = 1;
    for(int i = 1; i+k <= n+1; i++){
        int t = prefix[i+k-1] - prefix[i-1];
        if(t < mi){
            mi = t;
            ans = i;
        }
    }
    cout << ans << ln;
}
int main(){
    IO
    Solve();
    return 0;
}
/*
1 1
100
*/

#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define int long long
#define ii pair<int,int>

using namespace std;

const int maxn = 1e5+5;

int preffix[maxn];

bool compare(ii a, ii b){
    return a.first < b.first;
}

void Solve(){
    int n,d; cin >> n >> d;
    ii arr[maxn];

    for(int i = 1; i <= n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr+1, arr+1+n, compare);

    for(int i = 1; i <= n; i++){
        preffix[i] = preffix[i-1] + arr[i].second;
    }

//    el
//    for(int i = 0; i < n; i++){
//        cout << arr[i].first << " " << arr[i].second;
//        el
//    }
    int ans = 0, sum = 0, l = 1, r = 1;

    while(l <= n && r <= n){
        if(arr[r].first - arr[l].first < d){
            sum += arr[r].second;
            r++;
        }else{
//            break;
            ans = max(ans, sum);

            int t = l, p = r;
            while(t <= p){
                int mid = (t+p)/2;
                if(arr[r].first - arr[mid].first < d){
                    p = mid - 1;
                    l = mid;
                }else t = mid + 1;
            }
            sum = preffix[r] - preffix[l];
        }
    }
    ans = max(ans, sum);
    cout << ans << ln;


}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

/*
5 6
5 11
10 11
11 11
12 11
100 1
*/

//#include <bits/stdc++.h>
//
//using namespace std;
//void Solve(){
//    int n,q; cin >> n >> q;
//    vector<long long> a(n);
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    long long sum = accumulate(a.begin(), a.end(),0);
//    long long l,r,k;
//    for(int i = 1; i <= q; i++){
//        cin >> l >> r >> k;
//        long long s = sum;
//        long long tmp = 0;
//        for(int i = l-1; i < r; i++){
//            tmp += a[i];
//        }
//        s = s - tmp;
//        s = s + (l-r+1)*k;
//        if (s % 2 != 0) cout << "YES\n";
//        else cout << "NO\n";
//    }
//}
//int main(){
//    int t; cin >> t;
//    while(t--){
//        Solve();
//    }
//    return 0;
//}
//

#include <iostream>

using namespace std;
long long n,a[200005],q,sum=0,pref[200005],t;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>t;
    while(t--)
    {
        sum = 0;
        cin >> n >> q;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sum+=a[i];
            pref[i]=pref[i-1];
            pref[i]+=a[i];
        }
        for(int i = 0; i < q; i++){
            long long l,r,k;
            cin >> l >> r >> k;
            long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
            if(ans%2==1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}

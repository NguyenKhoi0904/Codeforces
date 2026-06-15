#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<char,int> m;
    for(int i = 0; i < n; i++){
        m[a[i][0]]++;
    }
    int ans = 0;
    for(auto e : m){
        if(e.second > 1){
            if(e.second % 2 == 0){
                int t1 = e.second /2;
                ans += (t1-1)*(t1);
            }else{
                int t1 = e.second /2;
                ans += ((t1-1)*t1)/2 + (t1*(t1+1))/2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int a,b,c; cin >> a >> b >> c;
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    int cnt = 0;
    sort(arr.begin(), arr.end(), greater<>());
    for(int i = 0; i < 3; i++){
        if(arr[i]>0){
            arr[i]--;
            cnt++;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j < i;  j++){
            if(arr[i] != 0 && arr[j] != 0){
                arr[i]--;
                arr[j]--;
                cnt++;
            }
        }
    }
    if(arr[0] != 0 && arr[1] != 0 && arr[2] != 0) cnt++;
    cout << cnt << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

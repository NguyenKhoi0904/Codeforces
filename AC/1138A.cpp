/*
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> length;
    vector<int> type;
    int current_l = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]) current_l++;
        else{
            length.push_back(current_l);
            type.push_back(a[i-1]);
            current_l = 1;
        }
    }
    length.push_back(current_l);
    type.push_back(a[n-1]);
    int ans = 0;
    for(int i = 1; i < length.size(); i++){
        if(type[i] != type[i-1]){
            ans = max(ans, 2*min(length[i], length[i-1]));
        }
    }
    cout << ans << endl;
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

int n;
void Solve(){
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

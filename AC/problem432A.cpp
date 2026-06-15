#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int pos_team = n / 3;
    int team = 0;
    int tmp = 0;
    bool flag;
    while(pos_team--){
        flag = true;
        for(int i = tmp; i < tmp+3; i++){
            if (a[i] + k > 5){
                flag = false;
                break;
            }
        }
        if (flag) team++;
        tmp += 3;
    }
    cout << team << endl;
    return 0;
}


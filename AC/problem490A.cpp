#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p = 0,m = 0,pe = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == 1)  p++;
        else if (a[i] == 2) m++;
        else pe++;
    }
    int possible_team = n / 3;
    int team = 0;
    while(possible_team--){
        if (p-->0 && m-->0 && pe-->0)   team++;
    }
    cout << team << endl;
    while(team--){
        bool flag1 = true, flag2 = true, flag3 = true;
        for(int i = 0; i < n; i++){
            if (a[i] == 1 && flag1){
                cout << i+1 << " ";
                a[i] = -1;
                flag1 = false;
                continue;
            }
            if(a[i] == 2 && flag2){
                cout << i+1 << " ";
                a[i] = -1;
                flag2 = false;
                continue;
            }
            if(a[i] == 3 && flag3){
                cout << i+1 << " ";
                a[i] = -1;
                flag3 = false;
            }
        }
        cout << endl;
    }
    return 0;
}


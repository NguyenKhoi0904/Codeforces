#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> a(4);
    for(int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < 2; i++){
        if (a[i+2] < (a[i]+a[i+1])){
            cout << "TRIANGLE\n";
            return 0;
        }
    }
    for(int i = 0; i < 2; i++){
        if (a[i+2] == (a[i]+a[i+1])){
            cout << "SEGMENT\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int length = a[0].size();
    int room = INT_MIN;
    for (int i = 0; i < length; i++){
        int c = 0;
        for (int j = 0; j < a.size();j++){
            if (a[j][i] == '1') c++;
        }
        room = max(room, c);
    }
    cout << room << endl;
    return 0;
}


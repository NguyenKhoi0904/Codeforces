#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (max < a[i]) max = a[i];
    }
    int s = 0;
    for(int i = 0; i < n; i++){
        if (a[i] != max){
            s += (max - a[i]);
        }
    }
    cout << s << endl;
    return 0;
}


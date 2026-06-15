#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_index = 0;
    for (int i = 0; i < n; i++){
        if (a[max_index] < a[i])
            max_index = i;
    }
    a.erase(a.begin()+max_index);
    int max = a[0];
    for(int i = 1; i < n-1; i++){
        if (max < a[i])
            max = a[i];
    }
    cout << max_index + 1 << " " << max << endl;
    return 0;
}


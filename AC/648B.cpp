#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int i = 0, j = 2*n-1;
    while(i <= j){
        cout << a[i] << " " << a[j] << endl;
        i++;
        j--;
    }
    return 0;
}

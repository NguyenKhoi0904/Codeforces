#include <bits/stdc++.h>

using namespace std;
void Valera_sort(vector<int> &a, int n) {
    for(int i = 1; i < n; i++) {
        for(int j = i; j < n; j++) {
            if (a[j-1] > a[j])
                swap(a[j-1], a[j]);
        }
    }
}
int main(){
    int n; cin >> n;
    if (n <= 2) cout << -1 << endl;
    else{
        for(int i = n; i > 0; i--)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}


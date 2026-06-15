#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long mi = *min_element(a.begin(), a.end());
    int index = 0, c = 0;
    for(int i = 0; i < n && c!=2; i++){
        if (a[i] == mi){
            c++;
            index = i;
        }
    }
    if (c == 1) cout << index+1 << endl;
    else cout << "Still Rozdil\n";
    return 0;
}


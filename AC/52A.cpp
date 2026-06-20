#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> m;
    for(int e : a)
        m[e]++;

    int max_count = -1;
    for(auto &p : m){
        if (p.second > max_count){
            max_count = p.second;
        }
    }
    cout << n - max_count << endl;

    return 0;
}



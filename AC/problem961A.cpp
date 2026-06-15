#include <bits/stdc++.h>

using namespace std;
int main(){
    map<int,int> ma;
    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    ma[i] = 0;
    vector<int> a(m);
    for (int i = 0; i < m; i++){
        cin >> a[i];
        ma[a[i]]++;
    }
    int point = INT_MAX;
    for(auto &e : ma){
        point = min(point,e.second);
    }
    cout << point << endl;
    return 0;
}


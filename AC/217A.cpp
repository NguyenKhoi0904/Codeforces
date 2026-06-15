#include <bits/stdc++.h>

#define ln "\n"

using namespace std;

int n;

class DSU{
private:
    vector<int> parent, sz;

public:
    DSU(int n){
        parent.resize(n+1);
        sz.resize(n+1,1);
        for(int i = 1; i <= n; i++) parent[i] = i;
    }

    void union_set(int a, int b){
        a = find_set(a);
        b = find_set(b);
        if(a != b){
            if(sz[a] < sz[b]) swap(a,b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }

    int find_set(int x){
        if(x == parent[x]) return x;
        return parent[x] = find_set(parent[x]);
    }

    int count_parent(){
        set<int> s;
        for(int i = 1; i <= n; i++){
            s.insert(find_set(i));
        }
        return s.size();
    }

};



void Solve(){
    cin >> n;

    DSU dsu(n);
    vector<pair<int,int>> v(n+1);
    map<pair<int,int>, int> m;

    for(int i = 1; i <= n; i++){
        cin >> v[i].first >> v[i].second;
        m[v[i]] = i;
    }

    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(v[i].first == v[j].first || v[i].second == v[j].second){
                dsu.union_set(m[v[i]], m[v[j]]);
            }
        }
    }

    cout << dsu.count_parent()-1 << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

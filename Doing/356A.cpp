#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
vector<int> a,t,lazy;
struct Tmp{
    int l,r,x;
    Tmp(int l, int r, int x):l(l),r(r),x(x){}
};

void build(int node, int s, int e){
    if(s == e) t[node] = a[s];
    else{
        int mid = (s+e)/2;
        build(node*2, s, mid);
        build(node*2+1, mid+1, e);
        t[node] = t[node*2] + t[node*2+1];
    }
}

void down(int node, int s, int e, int val){
    if(lazy[node] != 0){
        if(s == e && s == val) return;
        t[node] = (e - s + 1) * lazy[node];
        if(s != e){
            lazy[node<<1] = lazy[node];
            lazy[node<<1|1] = lazy[node];
        }
        lazy[node] = 0;
    }
}
void update_range(int node, int s, int e, int L, int R, int val){
    down(node, s, e, val);
    if(e < L || s > R) return;
    if(L <= s && e <= R){
        lazy[node] = val;
        down(node,s,e,val);
        return;
    }
    int mid = (s+e)>>1;
    update_range((node<<1), s, mid, L, R, val);
    update_range((node<<1)+1, mid+1, e, L, R, val);
//    t[node] = t[2*node] + t[2*node+1];
}
void Solve(){
    int n,m; cin >> n >> m;
    a.resize(n+1);
    t.resize(4*(n+1),0);
    lazy.resize(4*(n+1));
    for(int i = 1; i <= n; i++) a[i] = i;
//    build(1,1,n);
    vector<Tmp> v;
    int tmp = m;
    while(tmp--){
        int l,r,x; cin >> l >> r >> x;
        v.push_back(Tmp(l,r,x));
    }
    for(int i = m-1; i >= 0; i--) update_range(1, 1, n, v[i].l, v[i].r, v[i].x);
    for(int e : t){
        cout << e << " ";
    }
    cout << ln;
    for(int e : lazy) cout << e << " ";
}
int main(){
    IO
    Solve();
    return 0;
}
/*
4 3
1 2 1
1 3 3
1 4 4
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
vector<pair<int,int>> a,t;
bool flag = true;
void build(int node, int s, int e){
    if(s == e) t[node] = a[s];
    else{
        ll mid = (s+e)/2;
        build(2*node,s,mid);
        build(2*node+1,mid+1,e);
        if(t[2*node].second == 1){
            t[node].first = t[2*node].first|t[2*node+1].first;
            t[node].second = 0;
        }else{
            t[node].first = t[2*node].first^t[2*node+1].first;
            t[node].second = 1;
        }
    }
}
void update(int node, int s, int e, int idx, int val){
    if(s == e){
        t[node].first = val;
    }else{
        int mid = (s+e)/2;
        if(idx <= mid) update(2*node,s,mid,idx,val);
        else update(2*node+1,mid+1,e,idx,val);
        if(t[2*node].second == 1) t[node].first = t[2*node].first|t[2*node+1].first;
        else t[node].first = t[2*node].first^t[2*node+1].first;
    }
}
void Solve(){
    int n,m; cin >> n >> m;
    int length = pow(2,n);
    a.resize(length+1);
    t.resize(4*(length+1));
    for(int i = 1; i <= length; i++){
        cin >> a[i].first;
        a[i].second = 1;
    }
    build(1,1,length);
    while(m--){
        int p,b; cin >> p >> b;
        update(1,1,length,p,b);
        cout << t[1].first << ln;
    }
}
int main(){
    IO
    Solve();
    return 0;
}

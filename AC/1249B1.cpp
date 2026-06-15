#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
class DSU{
private:
    vector<int> parent,size;
public:
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i = 1; i <= n; i++) parent[i] = i; // Mỗi phần tử là đại diện của chính nó
    }
    // Tìm đại diện của tập hợp chứa x với path compression
    int find(int x){
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]); // Đệ quy tìm cha và gán trực tiếp cha là root
    }

    // Hợp hai tập hợp chứa x và y
    void Union(int x, int y){
        int root_x = find(x);
        int root_y = find(y);

        if(root_x != root_y){
            if(size[root_x] < size[root_y]) swap(root_x,root_y);
            parent[root_y] = root_x;
            size[root_x] += size[root_y];
        }
    }

    void print_size(int n){
        for(int i = 1; i <= n; i++) cout << size[find(i)] << " ";
        cout << ln;
    }

    void print_parent(int n, vector<int> a){
        for(int i = 1; i <= n; i++) cout << find(i) << " ";
    }
};

void Solve(){
    int n; cin >> n;
    vector<int> p(n+1);
    DSU dsu(n);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
        dsu.Union(i,p[i]);
    }
    dsu.print_size(n);
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

/*
6
5
1 2 3 4 5
3
2 3 1
6
4 6 2 1 5 3
1
1
4
3 4 1 2
5
5 1 2 4 3
*/

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
        parent.resize(n);
        size.resize(n,0);
        for(int i = 0; i < n; i++) parent[i] = i; // Mỗi phần tử là đại diện của chính nó
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
            if(size[root_x] > size[root_y]) parent[root_y] = root_x;
            else if(size[root_y] < size[root_x]) parent[root_x] = root_y;
            else{
                parent[root_y] = root_x;
                size[root_x]++;
            }
        }
    }
    void cout_parent(){
        for(int e : parent) cout << e << " ";
        cout << ln;
    }
};
void Solve(){
    string s; cin >> s;
    int n = s.size();
    bool flag = true;
    DSU dsu = DSU(n);
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'E'){
            dsu.Union(i,i+1);
        }
    }
    if(s[n-1] == 'E'){
        dsu.Union(n-1, 0);
    }
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'N'){
            if(dsu.find(i) == dsu.find(i+1)){
                flag = false;
                break;
            }
        }
    }
    if(!flag){
        cout << "NO\n";
        return;
    }
    if(s[n-1] == 'N'){
        if(dsu.find(n-1) == dsu.find(0)) flag = false;
    }

    cout << (flag?"YES\n":"NO\n");
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


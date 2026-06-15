#include <bits/stdc++.h>

using namespace std;
struct Point{
    int x;
    int y;
};
void Solve(){
    int n,m; cin >> n >> m;
    vector<string> a(n);
    vector<Point> b;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (a[i][j] == '#'){
                b.push_back({i,j});
            }
        }
    }
    int center = b.size()/2;
    cout << b[center].x+1 << " " << b[center].y+1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

